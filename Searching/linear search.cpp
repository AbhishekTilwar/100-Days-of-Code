#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int r){
    for(int i=0; i<n;i++){
        if(arr[i]==r){
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int n,key,arr[10];
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<linearsearch(arr,n,key);
}
