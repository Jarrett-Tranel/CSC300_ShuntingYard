#include "StringFactory.hpp"
#include <iostream>
#include "string.h"

using namespace std;

string* StringFactory::split(LinkedList* ll, char* s, char* delims)
{
    char* tempString;
    int numSize;

    

    tempString = strtok(s, delims);
    do
    {
        
        ll->addEnd(tempString);
        tempString = strtok(NULL, " ");
        //cout << sizeof(s);
        //cout << &s[i];
        //ll->addEnd(tempString = strtok(NULL, " "));
    } while (tempString);
    
    
    
    //cout<<tempString << "\n";

    //code we wrote in study group
}