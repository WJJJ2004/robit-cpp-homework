#include <iostream>
#include "MyVector.h"

using namespace std;

void choose_type_function();
template<typename T>
void test_myvector();

int main()
{
    choose_type_function();
}

void choose_type_function()
{
    while(1)
    {
        string option;

        cout << "choose vector's type" << endl;
        cin >> option;

        if(option == "int")
        {
            test_myvector<int>();
            break;
        }
        else if(option == "double")
        {
            test_myvector<double>();
            break;
        }
        else if(option == "char")
        {
            test_myvector<char>();
            break;
        }
        else
        {
            cout << "retry" << endl;
        }
    }
}

template<typename T>
void test_myvector()
{
    string new_vector;

    cout << "name new vector: " << endl;
    cin >> new_vector;

    MyVector<T> vec;

    string command;
    T element;
    int index;

    while(1)
    {
        cout << "command: " << endl;
        cin >> command;

        if(command == "pushback")
        {
            cout << "element: " << endl;
            cin >> element;

            vec.My_push_back(element);
            cout << "pushback done" << endl;
        }
        else if(command == "at")
        {
            cout << "Enter index to find: " << endl;
            cin >> index;
            cout << vec.My_at(index) << endl;
            cout << "at done" << endl;
        }
        else if(command == "begin")
        {
            cout << "First element: " << vec.My_begin() << endl;
            cout << "begin done" << endl;
        }
        else if(command == "end")
        {
            cout << "Last element: " << vec.My_end() << endl;
            cout << "end done" << endl;
        }
        else if(command == "empty")
        {
            cout << (vec.My_empty() ? "Vector is empty." : "Vector is not empty.") << endl;
            cout << "empty done" << endl;
        }
        else if(command == "erase")
        {

            cout << "Enter index to erase: " << endl;
            cin >> index;
            vec.My_erase(index);
            cout << "erase done" << endl;
        }
        else if(command == "insert")
        {

            cout << "Enter index to insert: " << endl;
            cin >> index;
            cout << "Enter element to insert: " << endl;
            cin >> element;
            vec.My_insert(index, element);
            cout << "insert done" << endl;
        }
        else if(command == "size")
        {
            cout << "Size of vector: " << vec.My_size() << endl;
            cout << "size done" << endl;
        }
        else if(command == "exit")
        {
            break;
        }
        else
        {
            cout << "retry" << endl;
        }
    }
}
