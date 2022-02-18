#include<iostream>
#include<string.h>
using namespace std;

bool palindrome(char* str,int start,int end)
{
    if(start == end)     
    {
        return true;
    }
    if(start >= end)
    {
        return true;
    }
    if(str[start] == str[end] && palindrome(str,start+1,end-1))  
    {
        return true;
    }
    return false;
}

int main(int arg,char* argv[])
{
    if(palindrome(argv[1],0,strlen(argv[1])-1))
    {
        cout<<"Palindrome"<<endl;
    }
    else
        cout<<"not Palindrome"<<endl;
    return 0;
}