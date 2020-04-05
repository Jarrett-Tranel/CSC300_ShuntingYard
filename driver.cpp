#include <string.h>
#include <iostream>
#include "Queue.hpp"
#include "Stack.hpp"
#include "StringFactory.hpp"
using namespace std;

bool isThisANumber(string test)
{
    if ((test!= "*") && (test!= "/") && (test!="+") && (test!= "-"))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int precidenceFactory(string oper)
{
    if(oper == "*")
    {
        return 2;
    }
    else if(oper == "/")
    {
        return 2;
    }
    else if(oper == "+")
    {
        return 1;
    }
    else
    {
        return 1;
    }
}

int main()
{
    
    string s = "1+1*5+2";
    string ops = "+-/*";
    Queue* inputQ = StringFactory::split(s,ops); 
    Queue* outputQ = new Queue(); 
    Stack* theOperators = new Stack();
    //inputQ->DisplayQueue();

    int myCounter = inputQ->getCount();
    for(int i = 0; i < myCounter; i++)
    {
        string temp = inputQ->Dequeue();
        if(isThisANumber(temp))
        {
            outputQ->Enqueue(temp);
        }
        else
        {
            if(theOperators->getCount() == 0)
            {
                theOperators->push(temp);
            }
            else
            {
                while(precidenceFactory(theOperators->peek()) > precidenceFactory(temp))
                {
                    outputQ->Enqueue(theOperators->pop());
                }
                theOperators->push(temp);
                
            }
        }
    }
    
    int hold = theOperators->getCount();
    for(int j = 0; j<hold; j++)
    {
        outputQ->Enqueue(theOperators->pop());
    } 
    
    outputQ->DisplayQueue();
    //theOperators->display();
    
}