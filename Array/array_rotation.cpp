#include <iostream>
using namespace std;

void rotatearr(int arr[], int n)
{
    int temp=arr[0],i;
    for(i=0;i<n-1;i++)
    
        arr[i]=arr[i+1];
        
    arr[i]=temp;
}

void rotate(int arr[],int n,int d)
{
    for(int i=0;i<d;i++)
    {
        rotatearr(arr,n);
    }
}

void printarr(int arr[],int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main() {
	//code
	int n,d;
	int arr[n];
	n=sizeof(arr) / sizeof(arr[0]);
	cin>>n>>d;
	
	for(int i=0; i<n; i++)
	{
	    cin>>arr[i];
	}
	
	rotate(arr,n,d);
	printarr(arr,n);
	
	return 0;
}
