#include <iostream>
using namespace std;

void print(int* a,int len){
    cout<<"-----------------------------------------------------------------"<<endl;
    for(int i = 0; i < len; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n----------------------------------------------------------------\n"<<endl;
}

void merge(int *Arr, int start, int mid, int end) {
	int temp[end - start + 1];
	int i = start, j = mid+1, k = 0;
	while(i <= mid && j <= end) {
		if(Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}
	while(i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}
	while(j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}
	for(i = start; i <= end; i += 1) {
		Arr[i] = temp[i-start];
	}
}

void mergesort(int *Arr, int start, int end) {

	if(end>start) {
		int mid = (start + end) / 2;
		mergesort(Arr, start, mid);
		mergesort(Arr, mid+1, end);
		merge(Arr, start, mid, end);
	}
}
int main()
{
    int arr[]={14,7,3,12,9,11,6,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,len-1);
    print(arr,len);
    return 0;
}