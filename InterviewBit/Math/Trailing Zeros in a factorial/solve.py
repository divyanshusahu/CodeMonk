class Solution:
    # @param A : integer
    # @return an integer
    def trailingZeroes(self, A):
        count = 0
        while(A) :
            count += int(A/5)
            A = A/5

