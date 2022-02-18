#include<iostream>
using namespace std;

int linearSearch(int arr[],int search,int len)
{
    for(int i=0;i<len;i++)
    {
        if(arr[i] == search)
        {
            return i;
        }
    }
    return len;
}

int main()
{
    int n;
    cout<<"Enter Number of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements:"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int search;
    cout<<"Enter a Element to Search:"<<endl;
    cin>>search;

    int result = linearSearch(arr,search,n);

    if(result == n)
    {
        cout<<"Element is not present in the list:";
    }
    else
    {
        cout<<"Element is Present at "<<result+1<<" Location"<<endl;
    }
    return 0;
}