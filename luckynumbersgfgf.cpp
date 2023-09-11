bool isLucky(int n) {
        // code here
         for(int i=2; i<=n; i++)
        {
            if(n%i==0)
            return false;
            
            n=n-n/i; // remmaining numbers
        }
        return true;
    }