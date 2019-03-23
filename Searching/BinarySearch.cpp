
// Note : Given array should be sorted
// Time Complexity : O(Log n).

#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
const int N=1e5+5;

//Binary Search
int BinarySearch(int arr[], int start, int end, int x){
    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (x == arr[mid])
            return mid + 1;
        if (x < arr[mid])
        {
            return BinarySearch(arr, start, mid - 1, x);
        }
        if (x > arr[mid])
        {
            return BinarySearch(arr, mid + 1, end, x);
        }
    }

    return -1;
}

int main(){
    IOS;
    int n,x,index;

    // Size of array
    cin>>n;
    int arr[n];
    
    // Taking values of array
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cin>>x;
    index = BinarySearch(arr, 0, n-1, x);

    if(index != -1)
        cout<<"Element found at index "<<index<<endl;
    else
        cout<<"Element not found"<<endl;

    return 0;
}
