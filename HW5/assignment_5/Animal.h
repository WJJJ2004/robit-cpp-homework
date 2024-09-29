#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

#include <iostream>
#include <string>

class Animal{
protected:
    std::string name;
    int age;
public:
    Animal(std::string name, int age);

    virtual void makeSound(){};
    void showinfo();
};


Animal::Animal(std::string name, int age) { this->name = name; this->age = age; };

void Animal::showinfo()
{
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
}

class Dog : public Animal{

public:
    Dog(std::string name, int age) : Animal(name,age) {};
    virtual void makesound(){
        cout << "Bark" << endl;
    }
};

class Cat : public Animal{
public:
    Cat(std::string name, int age) : Animal(name,age) {};
    virtual void makesound(){
        cout << "Meow" << endl;
    }
};

class Bird : public Animal{
public:
    Bird(std::string name, int age) : Animal(name,age) {};
    virtual void makesound(){
        cout << "Chrip" << endl;
    }
};

#endif // ANIMAL_H
