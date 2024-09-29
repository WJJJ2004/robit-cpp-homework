#include <iostream>
#include "BoolStack.h"
#include "BoolQueue.h"

using namespace std;

BoolStack::BoolStack() : topNode(nullptr), size(0) {}

BoolStack::~BoolStack()
{
    while (!isEmpty()) {
        pop();  // 스택이 비어질 때까지 항목 제거
    }
}

void BoolStack::push(bool item)
{
    Node* newNode = new Node(item);   // 새로운 노드 생성
    newNode->next = topNode;          // 새 노드의 next를 기존 topNode로 설정
    topNode = newNode;                // topNode를 새 노드로 갱신
    size++;                           // 스택의 크기 증가
}

bool BoolStack::pop()
{
    if (isEmpty()) {
        // 스택이 비어있을 때 예외 처리
        throw std::out_of_range("Stack is empty, cannot pop.");
    }

    Node* tempNode = topNode;        // 현재 최상단 노드를 임시로 저장
    bool poppedData = topNode->data; // 최상단 노드의 데이터를 저장
    topNode = topNode->next;         // 최상단을 그 다음 노드로 변경
    delete tempNode;                 // 이전 최상단 노드 메모리 해제
    size--;                          // 스택 크기 감소

    return poppedData;               // 꺼낸 데이터 반환
}

bool BoolStack::top() const          // 최상단 항목 반환
{
    if (isEmpty())
    {
        // 스택이 비어있을 때 예외 처리
        throw std::out_of_range("Stack is empty.");
    }
    return topNode->data;
}

bool BoolStack::isEmpty() const  // 스택이 비어있는지 확인
{
    if(size > 0 ) return false;
    else return true;
}

int BoolStack::getSize() const
{
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        return size;
    }
}    // 스택의 크기 반환

BoolQueue::BoolQueue() : frontNode(nullptr),rearNode(nullptr),size(0) {}

BoolQueue:: ~BoolQueue()
{
    while (!isEmpty())
    {
        dequeue();  // 스택이 비어질 때까지 항목 제거
    }
}

void BoolQueue::enqueue(bool item)
{
    Node* newNode = new Node(item);   // 새로운 노드 생성
    newNode->next = frontNode;
    frontNode = newNode;
    size++;
}    // 항목 삽입

bool BoolQueue::dequeue()
{
    if (isEmpty())
    {
        // 스택이 비어있을 때 예외 처리
        throw std::out_of_range("Queue is empty, cannot dequeue.");
    }

    bool dequeued_Data = rearNode->data;

    Node* nodeptr = frontNode;

    for(int i = 0 ; i < size - 2 ; i++)
    {
        nodeptr = nodeptr->next;
    }

    nodeptr->next = nullptr;

    size--;

    return dequeued_Data;
}

bool BoolQueue::front() const
{
    return frontNode->data;
}

bool BoolQueue::isEmpty() const
{
    if(size > 0)
    {
        return false;
    }
    else return true;
}

int BoolQueue::getSize() const
{
    if (isEmpty())
    {
        // 스택이 비어있을 때 예외 처리
        throw std::out_of_range("Queue is empty, cannot dequeue.");
    }
    else return size;
}

void Test_stack(string command,BoolStack stack);
void Test_queue(string command,BoolQueue Queue);


int main()
{
    char option;

    cout << "choose option(press 1 to Stack press 0 to Queue) : " ;
    cin >> option;

    if((int)option == 1) // test stack
    {
        system("cls");

        string command;

        BoolStack stack;

        while(1)
        {
            cout << "command: ";
            cin >> command ;
            Test_stack(command, stack);
        }
    }
    else if((int)option == 0) // test queue
    {
        system("cls");

        string command;

        while(1)
        {
            cout << "command: ";
            cin >> command ;

            BoolQueue Queue;
            Test_queue(command,Queue);
        }
    }
    else  // error
    {
        system("cls");
        main();
    }


}

void Test_stack(string command,BoolStack stack)
{
    if(command.compare("push")==0)
    {
        bool newitem;
        cout << "new_item: ";
        cin >> newitem ;

        stack.push(newitem);
    }
    else if(command.compare("pop")==0)
    {
        stack.pop();
    }
    else if(command.compare("top")==0)
    {
        stack.top();
    }
    else if(command.compare("isEmpty")==0)
    {
        stack.isEmpty();
    }
    else if(command.compare("getSize")==0)
    {
        stack.getSize();
    }
}

void Test_queue(string command,BoolQueue Queue)
{
    if(command.compare("enqueue")==0)
    {
        bool newitem;
        cout << "new_item: ";
        cin >> newitem ;
        Queue.enqueue(newitem);
    }
    else if(command.compare("dequeue")==0)
    {
        Queue.dequeue();
    }
    else if(command.compare("front")==0)
    {
        Queue.front();
    }
    else if(command.compare("isEmpty")==0)
    {
        Queue.isEmpty();
    }
    else if(command.compare("getsize")==0)
    {
        Queue.getSize();
    }
}
