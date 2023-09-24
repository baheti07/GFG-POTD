vector<int> duplicates(int arr[], int n) {
        // code here
     vector<int>ans;
        int freq[n] = {0};
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for(int i=0;i<n;i++) {
            if(freq[i] > 1) {
                ans.push_back(i);
            }
        }
        if(ans.empty()) {
            ans.push_back(-1);
        }
 
        return ans;
    }