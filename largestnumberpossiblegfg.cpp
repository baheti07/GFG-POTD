string findLargest(int N, int S){
        // code here
        string ans = "";
        if (S == 0 && n > 1)
            return "-1";
        for (int i = 0; i < n; i++) {
            if (S >= 9) {
                ans += '9';
                S -= 9;
            } else {
                ans += (char)(S + 48);
                S = 0;
            }
        }
        if (S > 0) // eg N=2, S=20
            return "-1";
    
        return ans;
    }