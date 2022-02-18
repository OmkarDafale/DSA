#include<iostream>
using namespace std;

void binarysearch(int arr[],int search,int mid,int len)
{
    if(arr[mid] == search)
    {
        cout<<"ELement Found at Position "<<mid+1<<endl;
        return;
    }
    // else if(arr[mid]>search)
    // {
    //     mid = mid/2;
    //     binarysearch(arr,search,mid,len);
    // }
    // else if(arr[mid]<search)
    // { 
    //     mid = ((mid+1)+len)/2;
    //     binarysearch(arr,search,mid,len);
    // }
    arr[mid] < search ? binarysearch(arr,search,0,mid-1):binarysearch(arr,search,mid+1,len);
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
    int mid = n/2;
    binarysearch(arr,search,mid,n-1);

    return 0;
}