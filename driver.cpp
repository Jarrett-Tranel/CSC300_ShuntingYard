#include<iostream>
#include<string.h>
using namespace std;

//#WeLoveSingletons

//How does a penguin build a house???

char str[] = "14682 + 75223 * 32 - 84 / 12";
string arr[50];
int x = 0;

void splinator()
{

    char delims[] = "+-*/ ";
    char* tempString;
    tempString = strtok(str, delims);
    do
    {
        arr[x] = tempString;
        x++;
        tempString = strtok(NULL, " ");
    } while (tempString);
    

}

int main()
{
    splinator();
    for(int i = 0; i<x; i++)
    {
        cout<<arr[i]<<"\n"; 
    }
}


//Igloos it together ;)
