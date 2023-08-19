vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        if(s<=0){
            return {-1};
        }
        int start =0,end=0;
        long long sum =0;
        vector<int> ans;
        while(start<=end && end<=n)
        {
            if(sum<s){
                sum+=arr[end];
                end++;
            }
            else if(sum==s){
                ans.push_back(start+1);
                ans.push_back(end);
                return ans;
            }
            else {
                sum=sum-arr[start];
                start++;
            }
        }
        ans.push_back(-1);
        return ans;
    }