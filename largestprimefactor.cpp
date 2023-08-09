long long int largestPrimeFactor(int N){
        // code here
        
    // }

        long n = 2;
        // Loop until n*n <= N
        while ((n * n) <= N) {
            if (N % n == 0) {
                N /= n;
            } else {
                n++;
            }
        }
        return N;
    }

