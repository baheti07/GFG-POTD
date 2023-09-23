int eqp(long long arr[],int n)
{
    if(n==1) return 1;
    int ps[n],ss[n];
    ps[0]=arr[0];
    ss[n-1]=arr[n-1];
    for(int i=1;i<n;i++)
    {
        ps[i]=ps[i-1]+arr[i];
    }
    for(int i=n-2;i>=0;i--)
    {
        ss[i]=ss[i+1]+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ps[i]==ss[i]) return i+1;
    }
    return -1;
}