#ifndef BOOLSTACK_H
#define BOOLSTACK_H

#include <iostream>

using namespace std;

class BoolStack {
private:
    struct Node {
        bool data;
        Node* next;
        Node(bool item) : data(item), next(nullptr) {}
    };

    Node* topNode;    // 스택의 최상단 노드를 가리킴
    int size;         // 스택의 크기

public:
    BoolStack();      // 생성자
    ~BoolStack();     // 소멸자

    void push(bool item);  // 항목 삽입
    bool pop();            // 항목 제거 및 반환
    bool top() const;      // 최상단 항목 반환
    bool isEmpty() const;  // 스택이 비어있는지 확인
    int getSize() const;   // 스택의 크기 반환
};

BoolStack::BoolStack()  : topNode(nullptr), size(0) {}
BoolStack::~BoolStack()
{
    while (!BoolStack::isEmpty())
    {
        pop();
    }
    cout << "~boolstack code worked" << endl;
}

void BoolStack::push(bool item)
{
    Node* newNode = new Node(item);
    newNode->next = topNode;
    topNode = newNode;
    size++;
}

bool BoolStack::pop()
{
    if (isEmpty())
    {

        throw std::out_of_range("Stack is empty, cannot pop.");
    }
    else
    {
        Node* tempNode = topNode;
        bool poppedData = topNode->data;
        topNode = topNode->next;
        delete tempNode;
        size--;

        return poppedData;
    }
}

bool BoolStack::top() const
{
    if (isEmpty())
    {

        throw std::out_of_range("Stack is empty.");
    }
    else return topNode->data;
}

bool BoolStack::isEmpty() const
{
    if(size > 0 ) return false;
    else return true;
}

int BoolStack::getSize() const
{
    if (isEmpty())
    {

        throw std::out_of_range("Stack is empty.");
    }

    return size;
}


#endif // BOOLSTACK_H
