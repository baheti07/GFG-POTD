#include<bits/stdc++.h>
using namespace std;
 int findMinDiff(vector<int> arr, int n, int m){
    //code
    sort(arr.begin(),arr.end());
    int l=0,r=m-1;
    int min=INT_MAX;
    while(r<n)
    {
        if(arr[r]-arr[l]<min)
        min=arr[r]-arr[l];
        r++;
        l++;
    }
    return min;
    }   
    int main()
    {
        vector<int>arr={3, 4, 1, 9, 56, 7, 9, 12};
        int n=arr.size();
        int m=5;
        cout<<findMinDiff(arr,n,m);
    }