class Solution:
    # @param A : integer
    # @return an integer
    def reverse(self, A):
        ans = 0
        b = -2147483648
        if (str(A)[0] == "-") :
            ans = int(str(A)[0] + str(A)[1:][::-1])
        ans = int(str(A)[::-1])
        if ans > 2147483647 :
            return 0
        if b > ans :
            return 0
        return ans
