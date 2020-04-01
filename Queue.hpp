#include <iostream>
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

        void DisplayQueue();

};

