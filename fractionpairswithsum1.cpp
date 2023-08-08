#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int countFractions(int n, int num[], int denom[])
    {
         int ans = 0;
        unordered_map<int, map<int, int>> mp;
        for (int i = 0; i < n; i++) {
            int x = num[i], y = denom[i];
            int g = gcd(x, y);
            x /= g; y /= g;
            
            int nx = y - x, ny = y;
            
            if (mp.find(nx) != mp.end() && mp[nx].find(y) != mp[nx].end()) {
                ans += mp[nx][y];
            }
            
            if (mp.find(x) != mp.end()) {
                map<int, int>& hm = mp[x];
                hm[y] = hm.find(y) != hm.end() ? hm[y] + 1 : 1;
            } else {
                map<int, int> hm;
                hm[y] = 1;
                mp[x] = hm;
            }
        }
        return ans;
    }

     int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    } 
    
};

