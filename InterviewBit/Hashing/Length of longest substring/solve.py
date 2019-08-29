def lengthOfLongestSubstring(A):
        n = len(A)
        cur_len = 1
        max_len = 1
        prev_index = 0
        i = 0

        visited = [-1] * 256
        visited[ord(A[0])] = 0

        for i in range(1,n) :
            prev_index = visited[ord(A[i])]

            if prev_index == -1 or (i - cur_len > prev_index) :
                cur_len += 1
            else :
                if cur_len > max_len :
                    max_len = cur_len
                cur_len = i - prev_index
            visited[ord(A[i])] = i
        if cur_len > max_len :
            max_len = cur_len

        return max_len

print(lengthOfLongestSubstring("deacadrtea"))