#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
    for(int i = 0;i < n-1; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout<<"Sorted Elements are:"<<endl;
    for(int i = 0;i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}


int main()
{
    int n;
    cout<<"Enter Number of elements to be entered"<<endl;
    cin>>n;
    int a[n];
    for(int i = 0; i<n ; i++)
    {
        cin>>a[i];
    }

    bubblesort(a,n);
    return 0;
}