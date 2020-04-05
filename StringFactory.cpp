#include "StringFactory.hpp"

bool StringFactory::isInString(string searchString, char charToFind)
{
    for(int i = 0; i < searchString.length(); i++)
    {
        if(searchString[i] == charToFind)
        {
            return true;
        }
    }
    return false;
}

Queue* StringFactory::split(string s, string delims)
{
    //string s = "123+42-8*2";
    //string ops = "+-*/";
    Queue* answerQ = new Queue();
    string temp = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(isInString(delims, s[i]))
        {
            answerQ->Enqueue(temp);
            answerQ->Enqueue((string)"" + s[i]);
            temp = "";
        }
        else
        {
            temp = temp + s[i];
        }
    }
    answerQ->Enqueue(temp);
    return answerQ;
}