#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n-1; i++){
        cin>>a[i];
    }
    int maxno=INT_MIN;
    for(int i=0; i<n-1; i++){
        maxno=max(maxno,a[i]);
    }
    cout<<maxno;
}
