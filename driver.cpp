#include <string.h>
#include <iostream>
#include "Queue.hpp"
//#include "StringFactory.hpp"
using namespace std;

int main()
{
    Queue* myStuff = new Queue();
    char s[] = "428 + 12 - 67 / 862 - 5 + 42";
    char* delims = " ";
    char* tempString;

    tempString = strtok(s, delims);
    do
    {
        myStuff->Enqueue(tempString);
        tempString = strtok(NULL, " ");
    } while (tempString);

    myStuff->DisplayQueue();
}
