int maxIndexDiff(int arr[], int n) {
        // code here
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0]=arr[0];
        suffix[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            prefix[i]=min(prefix[i-1],arr[i]);
           
        }
        for(int i=n-2;i>=0;i--) suffix[i]=max(suffix[i+1],arr[i]);
       int i=0,j=0,ans=INT_MIN;
       
        while(i<n&&j<n)
        {
            if(prefix[i]<=suffix[j])
            {
                ans=max(ans,j-i);
                j++;
            }
            else i++;
        }
        return ans;
    }
