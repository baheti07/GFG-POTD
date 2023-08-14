#include<bits/stdc++.h>
using namespace std;
int sn(vector<int>&nums)
{
    unordered_map<int,int> mp;
	   for(auto x: nums)
		   mp[x]++;
	   for(auto z:mp)
		   if(z.second==1)
			   return z.first;
	   return -1;
}
int main()
{
    vector<int>nums={4,-1,2,-1,2};
    cout<<sn(nums);
}