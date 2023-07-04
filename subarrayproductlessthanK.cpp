int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n=nums.size();
        int i=0,j=0;
        int ans=0;
        long pro=1;
        while(j<n)
        {
            pro*=nums[j];
            while(pro>=k)
            {
                pro/=nums[i];
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }