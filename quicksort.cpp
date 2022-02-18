#include<iostream>
using namespace std;


void print(int arr[],int len)
{
    for(int i = 0;i<len;i++)
        cout<<arr[i]<<" ";
}
int partition(int* arr,int low,int high)
{
    int pivot = arr[high];
    int h = high-1;
    while(low <= h ) 
    {   
        while(arr[low]<pivot)
        {                                   
            low++;
        }
        while(arr[h]>pivot)
        {
            h--;
        }
        if(low >= h)
        {   
            int temp = arr[low];
            arr[low] = pivot;
            arr[high] = temp;
            break;
        }
        else                
        {    
            int temp = arr[low];
            arr[low] = arr[h];
            arr[h] = temp;
        }      
    }
    //cout<<low;
    return low;
}

void quick(int* arr,int low,int high)
{
    if(low>high)
    {
        return;
    }
    int p = partition(arr,low,high);
    //cout<<p;   
    quick(arr,0,p-1);
    quick(arr,p+1,high);
    
}
int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1,-1,-2};
    int len = sizeof(arr)/sizeof(arr[0]);
    quick(arr,0,len-1);
    print(arr,len);
    return 0;
}