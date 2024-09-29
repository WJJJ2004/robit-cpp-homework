#include "Animal.h"

int main()
{
    Dog* newdog = new Dog("dog1", 4);
    newdog->showinfo();
    newdog->makesound();

    delete newdog;

    Cat* newcat = new Cat("Cat1", 7);
    newcat->showinfo();
    newcat->makesound();

    delete newcat;

    Bird* newbird = new Bird("Bird1", 1);
    newbird->showinfo();
    newbird->makesound();

    delete newbird;
}
