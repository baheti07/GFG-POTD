class Solution
{
    public:
    const long long mod = 1000000007;
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
          long long a = 1, b = 2, c = 4;
    
        if (n == 1) return a;
        if (n == 2) return b;
        if (n == 3) return c;
    
        long long d = 0;
    
        for (int i = 4; i <= n; i++) {
            d = (((a % mod + b % mod) % mod + c % mod) % mod);
            a = b % mod;
            b = c % mod;
            c = d % mod;
        }
    
        return d % mod;
        
        
    }
};