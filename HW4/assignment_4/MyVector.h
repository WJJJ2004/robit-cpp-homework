#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <stdexcept>

template<typename T>
class MyVector
{
private:

    T* data;
    int size;
    int cap;

    void double_cap()
    {
        cap *=2;
        T* new_array = new T(cap);

        for(int i =0; i < size ; ++i)
        {
            new_array[i] = data[i];
        }
        delete []data;
        data = new_array;
    }

public:

    MyVector();
    ~MyVector();

    void My_push_back(T element);
    T My_at(int index) const;
    T My_begin() const;
    T My_end() const;
    bool My_empty() const;
    void My_erase(int index);
    void My_insert(int index, T element);
    int My_size() const;

    T& operator [](int index) const;

    // T& operator = (int index);
    // void operator + (int index);
};

template<typename T>
MyVector<T>::MyVector() : data(nullptr) , size(0), cap(1) {data = new T(cap);};

template<typename T>
MyVector<T>:: ~MyVector()
{
    delete[] data;
}

template<typename T>
void MyVector<T>::My_push_back(T element)
{
    if(cap > size)
    {
        data[size] = element;
        ++size;
    }
    else
    {
        double_cap();
        data[size] = element;
        ++size;
    }
}

template<typename T>
T MyVector<T>::My_at(int index) const
{
    if (index < 0 || index >= size)
    {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template<typename T>
T MyVector<T>::My_begin() const
{
    if (My_empty())
    {
        throw std::out_of_range("Vector is empty");
    }
    return data[0];
}

template<typename T>
T MyVector<T>::My_end() const
{
    if (My_empty())
    {
        throw std::out_of_range("Vector is empty");
    }
    return data[size - 1];
}

template<typename T>
bool MyVector<T>::My_empty() const
{
    return (size == 0);
}

template<typename T>
void MyVector<T>::My_erase(int index)
{
    if (index < 0 || index >= size)
    {
        throw std::out_of_range("Index out of range");
    }
    for (int i = index; i < size - 1; ++i)
    {
        data[i] = data[i + 1];
    }
    --size;
}

template<typename T>
void MyVector<T>::My_insert(int index, T element)
{
    if (index < 0 || index > size)
    {
        throw std::out_of_range("Index out of range");
    }

    if(cap > size)
    {
        for (int i = size; i > index; --i)
        {
            data[i] = data[i - 1];
        }
        data[index] = element;
        ++size;
    }
    else
    {
        double_cap();

        for (int i = size; i > index; --i)
        {
            data[i] = data[i - 1];
        }
        data[index] = element;
        ++size;
    }
}

template<typename T>
int MyVector<T>::My_size() const
{
    return size;
}

template<typename T>
T& MyVector<T>::operator [](int index) const
{
    if (index < 0 || index >= size)
    {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

// template<typename T>
// T& MyVector<T>::operator = (int index)
// {
//     if (index < 0 || index >= size)
//     {
//         throw std::out_of_range("Index out of range");
//     }
//     return data[index];
// }

// template<typename T>
// void MyVector<T>::operator + (int index,int other_index)
// {

// }

#endif // MYVECTOR_H
