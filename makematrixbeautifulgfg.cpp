int findMinOpeartion(vector<vector<int> > mat, int n)
    {
        // code here 
        int r[n] = {0};
    int c[n] = {0};
    int maxVal = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            r[i] += mat[i][j];
            maxVal = max(maxVal, r[i]);

            c[j] += mat[i][j];
            maxVal = max(maxVal, c[j]);
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        r[i] = maxVal - r[i];
        res += r[i];
    }

    return res;
    } 