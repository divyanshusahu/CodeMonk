def lszero(A):
	    hash_map = {}
	    cur_sum = 0
	    max_len = 0
	    ans = []
	    
	    for i in range(len(A)) :
	        cur_sum += A[i]
	        
	        if A[i] == 0 and max_len == 0 :
	            max_len = 1
	            ans.append(A[i])
	        
	        if cur_sum == 0 :
	            max_len = i+1
	            ans = A[:i+1]
	       
	        if cur_sum in hash_map :
	            if max_len < (i-hash_map[cur_sum]) :
	                max_len = i-hash_map[cur_sum]
	                ans = A[hash_map[cur_sum]+1:i+1]
	        else :
	            hash_map[cur_sum] = i
	   
	    return ans

arr = [1, 2, -2, 0, 4, -4]
print(lszero(arr))