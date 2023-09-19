 unsigned int getFirstSetBit(int n)
    {
        
         if(n==0) return 0;
            
        int cnt  = 0;
      while(n > 0)
        {
            cnt++;
            if((n&1)==1)
             return cnt;
            
             n = n /2;   // n>>1;
        }
        
      return 0;
    }