#ifndef BOOLQUEUE_H
#define BOOLQUEUE_H

#include <iostream>

using namespace std;

class BoolQueue {
private:
    struct Node {
        bool data;       // 데이터 저장
        Node* next;      // 다음 노드를 가리키는 포인터
        Node(bool item) : data(item), next(nullptr) {}
    };

    Node* frontNode;      // 큐의 앞쪽 노드를 가리킴
    Node* rearNode;       // 큐의 뒤쪽 노드를 가리킴
    int size;             // 큐의 크기

public:
    BoolQueue();          // 생성자
    ~BoolQueue();         // 소멸자

    void enqueue(bool item);  // 항목 삽입
    bool dequeue();           // 항목 제거 및 반환
    bool front() const;       // 가장 앞 항목 반환
    bool isEmpty() const;     // 큐가 비어있는지 확인
    int getSize() const;      // 큐의 크기 반환
};


BoolQueue::BoolQueue() : frontNode(nullptr),rearNode(nullptr),size(0) {}

BoolQueue::~BoolQueue()
{
    while (!BoolQueue::isEmpty())
    {
        dequeue();
    }
}

void BoolQueue::enqueue(bool item)
{
    Node* newNode = new Node(item);
    newNode->next = nullptr;
    if (rearNode == nullptr)
    {
        frontNode = rearNode = newNode;
    }
    else
    {
        rearNode->next = newNode;
        rearNode = newNode;
    }
    size++;
}

bool BoolQueue::dequeue()
{
    if (isEmpty())
    {
        throw std::out_of_range("Queue is empty, cannot dequeue.");
    }

    Node* tempNode = frontNode;
    bool dequeuedData = frontNode->data;
    frontNode = frontNode->next;

    if (frontNode == nullptr) {
        rearNode = nullptr;
    }

    delete tempNode;
    size--;

    return dequeuedData;
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

        throw std::out_of_range("Queue is empty, cannot dequeue.");
    }
    else return size;
}



#endif // BOOLQUEUE_H
