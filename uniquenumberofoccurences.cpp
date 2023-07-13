bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int>mp;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
           s.insert(i->second);
        }
        return mp.size()==s.size();
    }
    /*
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        set<int>s;
        for(auto it:arr)
        {
            mp[it]++;
        }
        for(auto p:mp) s.insert(p.second);
        return mp.size()==s.size();
    }
    */