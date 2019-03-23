
// Time Complexity O(n)

#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
const int N=1e5+5;

// Linear Search
int32_t LinearSearch(int arr[], int n, int x){
    for(int i = 0; i < n; i++)
    {
        if (x == arr[i]) {
            return (i+1);
        }
    }
   return -1;
    
}

int32_t main(){
    IOS;
    int n,x;
    // Taking size of array
    cin>>n;             
    int arr[n];

    //Input Values in array
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //Element to be searched
    cin>>x;

    int index = LinearSearch(arr,n,x);
    
    if(index == -1) cout<<"Element not found!"<<endl;
    else cout<<"Element found at index "<<index<<endl;
    
    
    return 0;
}
