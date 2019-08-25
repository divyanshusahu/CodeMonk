class Solution:
    # @param A : integer
    # @return a list of strings
    def fizzBuzz(self, A):
        ans = []
        for i in range(1, A+1) :
            if i%3==0 and i%5==0 :
                ans.append("FizzBuzz")
                continue
            if i%3==0 :
                ans.append("Fizz")
                continue
            if i%5==0 :
                ans.append("Buzz")
                continue
            ans.append(i)
        return ans
            

