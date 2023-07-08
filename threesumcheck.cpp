#include<bits/stdc++.h>
using namespace std;
bool threeSum(vector<int>&arr)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            if(arr[i]+arr[j]+arr[k]<0) j++;
            else if(arr[i]+arr[j]+arr[k]>0) k--;
            else return true;
        }
    }
    return false;
}
int main()
{
    vector < int > arr{0, -1, 2, -3, 1};
    cout<<threeSum(arr);
}