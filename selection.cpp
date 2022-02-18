#include<iostream>
using namespace std;
int i,j,a[]={};



void swap(int* i,int* min)
{
    int temp = *min;
    *min = *i;
    *i = temp;
    

}
void selection(int a[],int n)
{
   for(i = 0;i < n-1; i++)
   {
        int min = i;
        for(j=i+1;j<n;j++)
        {
            
            if(a[min] > a[j])
            {
                min = j;
            }
        }
        swap(a[i],a[min]);
   }

}


int main()
{
    int n;
    cout<<"Enter Number of Elements:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" Elements in the array"<<endl; 
    for(i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    selection(a,n);
    cout<<"Sorted Elements are:"<<endl;
    for(i = 0; i < n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}