int Solution::gcd(int A, int B) {
    if (B == 0) {
        return A;
    }
    return Solution::gcd(B, A%B);
}

