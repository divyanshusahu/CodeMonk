class Solution:
    # @param A : integer
    # @return a strings
    def convertToTitle(self, A):
        lookup = {
            1: "A",
            2: "B",
            3: "C", 
            4: "D",
            5: "E",
            6: "F",
            7: "G",
            8: "H",
            9: "I",
            10: "J",
            11: "K",
            12: "L",
            13: "M",
            14: "N",
            15: "O",
            16: "P",
            17: "Q",
            18: "R",
            19: "S",
            20: "T",
            21: "U",
            22: "V",
            23: "W",
            24: "X",
            25: "Y",
            0: "Z" 
        }
        
        ans = ""
        while A :
            x = A%26
            ans += lookup[x]
            A = A/26

        return ans[::-1]


