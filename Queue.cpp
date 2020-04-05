#include "Queue.hpp"
#include <iostream>
using namespace std;

Queue::Queue()
{
    this->head= 0;
    this->elements = 0;
    this->tail = 0;
}

int Queue::getCount()
{
    return elements;
}

//add to end
void Queue::Enqueue(string endElement)
{
    Node* newNode = new Node(endElement);
    if(!this->head)
    {
        this->head = newNode;
    }
    else
    {
        tail->setNextNode(newNode);
    }
    this->tail = newNode;
    this->elements++;
}

//remove from front
string Queue::Dequeue()
{
    Node* nodeToReturn = this->head;
    this->head = this->head->getNextNode();
    string val = nodeToReturn->getPayload();
    delete nodeToReturn;
    this->elements--;
    return val;
}

void Queue::DisplayQueue()
{
    Node* currNode = this->head;
    for(int i = 0; i<this->elements; i++)
    {
        std::cout<<currNode->getPayload()<<"\n";
        currNode = currNode->getNextNode();
    }
}

