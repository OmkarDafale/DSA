#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void print(int a[],int len){
    cout<<"----------------------------------------------------------------"<<endl;
    for(int i = 0; i < len; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n----------------------------------------------------------------\n"<<endl;
}

void insertion(int a[], int len)
{
    int i =0,key;

    while(i<len-1)
    {
        key= i;
        if(a[key] > a[i+1])
        {
            swap(&a[i],&a[i+1]);

            for(int k = i-1;k>=0;k--)
            {
                if(a[key]<a[k])
                {
                    swap(&a[key],&a[k]);
                    key--;
                }
            }
        }
        i++;
    }
}


int main(){
    int a[] = {8,5,4,3,1,2,9,0,11,-1};
    int len = sizeof(a)/sizeof(a[0]);

    print(a,len);
    insertion(a,len);
    print(a,len);

    return 0;
}