int nextHappy(int n){
        // code here
        int next=n+1;
        int res=next;
        while(true)
        {
            if(ish(next)==1) return next;
            next++;
            res=next;
        }
        
    }
    int ish(int n)
    {
        if(n==1||n==7) return 1;
        int sum=n;
        int curr=n;
        while(sum>9)
        {
            sum=0;
            while(curr>0)
            {
                int d=curr%10;
                sum+=d*d;
                curr/=10;
            }
            if(sum==1) return 1;
            curr=sum;
        }
        if(sum==7) return 1;
        return 0;
    }