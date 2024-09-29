#include "BoolStack.h"
#include "BoolQueue.h"

void Test_stack(string command,BoolStack& stack);
void Test_queue(string command,BoolQueue& queue);

int main()
{
    int option;

    cout << "choose option(press 1 to Stack press 0 to Queue) : " ;
    cin >> option;

    if(option == 1) // test stack
    {
        string command;
        BoolStack stack;

        while(1)
        {
            cout << "command: ";
            cin >> command;
            Test_stack(command, stack);
        }
    }
    else if(option == 0) // test queue
    {
        string command;
        BoolQueue queue;

        while(1)
        {
            cout << "command: ";
            cin >> command;
            Test_queue(command, queue);
        }
    }
    else  // error
    {
        cout << "wrong respond try again" << endl;
    }
}

void Test_stack(string command, BoolStack& stack)
{
    if(command == "push")
    {
        bool newitem;
        cout << "new_item: ";
        cin >> newitem;
        stack.push(newitem);
    }
    else if(command == "pop")
    {
        cout << stack.pop() << endl;
    }
    else if(command == "top")
    {
        cout << stack.top() << endl;
    }
    else if(command == "isEmpty")
    {
        cout << (stack.isEmpty() ? "true" : "false") << endl;
    }
    else if(command == "getSize")
    {
        cout << stack.getSize() << endl;
    }
}

void Test_queue(string command, BoolQueue& queue)
{
    if(command == "enqueue")
    {
        bool newitem;
        cout << "new_item: ";
        cin >> newitem;
        queue.enqueue(newitem);
    }
    else if(command == "dequeue")
    {
        cout << queue.dequeue() << endl;
    }
    else if(command == "front")
    {
        cout << queue.front() << endl;
    }
    else if(command == "isEmpty")
    {
        cout << (queue.isEmpty() ? "true" : "false") << endl;
    }
    else if(command == "getSize")
    {
        cout << queue.getSize() << endl;
    }
}
