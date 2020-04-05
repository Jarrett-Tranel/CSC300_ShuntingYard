#include <iostream>
#ifndef Queue_hpp
#define Queue_hpp
#include "Node.hpp"
using namespace std;

class Queue
{

    private:

        Node* head;
        Node* tail;
        int elements;

    public:

        Queue();

        //add to end
        void Enqueue(string tail);

        //remove from front
        string Dequeue();
        int getCount();

        void DisplayQueue();

};

#endif 