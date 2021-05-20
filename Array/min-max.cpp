//efficient code- complexity O(n)
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, arr[10];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;

    for(int i=0; i<n; i++){
        minno=min(minno,arr[i]);
        maxno=max(maxno,arr[i]);
    }
    cout<<maxno<<" "<<minno;
}


// less efficient code- complexity O(n^2)
#include <iostream>
using namespace std;

int sort(int arr[], int n){
    for(int i=0; i<n-1; ++i){
        for(int j=0; j<n-i-1; ++j){
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int n, arr[10];
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,n);
    cout<<"Minimum no. "<<arr[0]<<endl;
    cout<<"Maximum no. "<<arr[n-1];
}
