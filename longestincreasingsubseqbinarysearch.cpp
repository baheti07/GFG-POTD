#include<bits/stdc++.h>
using namespace std;
int lis(vector<int>&arr)
{
    int n=arr.size();
    int len=1;
    vector<int>temp;
    temp.push_back(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(arr[i]>temp.back())
        {
            temp.push_back(arr[i]);
            len++;
        }
        else
        {
            int ind=lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin();
            temp[ind]=arr[i];
        }
    }
    return len;
}
int main()
{
    vector<int>arr={5,4,11,1,16,8};
    cout<<lis(arr);
}