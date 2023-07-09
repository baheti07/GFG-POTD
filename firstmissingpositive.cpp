#include<bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
         int n = nums.size();
        
        // We simply modify the vector
        // We move all those elements which are greater than 0
        // and then we check if the number at certain index is not equal to its index then
        // we swap the element at the index with its actual position where element is equal to its index
        for(int i = 0; i < n; i++)
            while(nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1])
                swap(nums[i], nums[nums[i] - 1]);
        
        // Then simply checking for all the elements in the vector
        // the first element where index is not equal to the number present at that index is our answer.
        
        for(int i = 0; i < n; i++)
            if(nums[i] != i + 1)
                return i + 1;
				
        return n + 1;  
    }
    int main()
    {
        vector<int>nums={3,4,-1,1};
        cout<<firstMissingPositive(nums);
    }