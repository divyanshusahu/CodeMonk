def twoSum(A, B):
        hash_map = {}
        for i in A :
            hash_map[i] = []
        for i in range(len(A)) :
            hash_map[A[i]].append(i)
        
        ans = [10**10, 10**10]
        ini_ans = ans
        for i in hash_map:
        	cur_ans = []
        	if (B-i) in hash_map :
        		index1 = min(hash_map[i]) + 1
        		index2 = min(hash_map[B-i]) + 1
        		if index1 == index2 and len(hash_map[i])==1 :
        			continue
        		if index1 == index2 :
        			index2 = sorted(hash_map[B-i])[1]+1
        		cur_ans.append(index1)
        		cur_ans.append(index2)
        		cur_ans = sorted(cur_ans)
        		if cur_ans[1] < ans[1] :
        			ans = cur_ans
        if ans == ini_ans :
        	ans = []
        	return ans
        if ans[0] == ans[1] and len(hash_map[B/2]) :
        	ans = []
        	c = sorted(hash_map[B/2])
        	ans.append(c[0]+1)
        	ans.append(c[1]+1)

        return ans

a = (2, 5, 0, -6, 7, -4, 0, 4, 3, 0, -2, 0, 9, -3, -9, -3, 9, 3, 2, -10, -8, -3, -10, -5, 2, -8, 4, 5, 6, 7, -10, 4, -3, -10, 5, 4, 1, 5, 5, -3, -1, -8, -3, -6, -7, -8, -8, -7, 0, -2, 7, 7, 10, -7, -7, 10, -4, 0, 0, -6, -5, -5, 0, 8, 4, 1, 4, -1, -10, -4, -6, 10, -2, 9, -6, -3, -4, -1, 10, -9, -5, 10, -5, 8, 3)
b = 0
print(twoSum(a,b))