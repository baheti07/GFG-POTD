vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long>arr;
      arr.push_back(1);
      if(n>1)arr.push_back(1);
      for(int i=2;i<n;i++)
      {
          arr.push_back(arr[i-2]+arr[i-1]);
      }
      return arr;
    }