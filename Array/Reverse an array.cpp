#include <iostream>
using namespace std;

int reverse(int arr[], int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
// Alternative Using Recursively call reverse for rest of the array.
/* Function to reverse arr[] from start to end
void rverese(int arr[], int start, int end)
{
    if (start >= end)
    return;
     
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
     
    // Recursive Function calling
    rverese(arr, start + 1, end - 1);
}*/

int printarr(int arr[],int n){
     for(int i=0; i<n; i++)
     {
        cout<<arr[i];
     }
}

int main()
{
    int arr[10];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nOriginal Number: ";
    printarr(arr,n);
    cout<<"\nReversed Number: ";
    reverse(arr,0,n-1);   
    printarr(arr,n);
}
/* Driver program to test above functions */
int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int d = 2; 
  
    // Function calling 
    leftRotate(arr, d, n); 
    printArray(arr, n); 
  
    return 0; 
}
