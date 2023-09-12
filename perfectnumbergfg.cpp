 int isPerfectNumber(long long n) {
        // code here
         if (n == 1)
            return 0;

        long sum = 1;
        for (long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                if (i != n / i) { // Avoid adding the same divisor twice
                    sum += n / i;
                }
            }
        }

        return sum == n ? 1 : 0;
    }