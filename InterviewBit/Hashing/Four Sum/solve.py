# For example, if the given array is {10, 2, 3, 4, 5, 9, 7, 8} and X = 23, 
# then your function should print “3 5 7 8” (3 + 5 + 7 + 8 = 23).
import itertools
def solveAnswers(A, B):
  ans = []
  for i in A:
    c = []
    for j in B:
      c = i+j
      if len(set(c)) == 4 :
        ans.append(c)
  return ans

def fourSum(A, B):
  n = len(A)
  pairSumMap = {}
  for i in range(n):
    for j in range(i+1, n):
      pairSumMap[A[i]+A[j]] = []
  for i in range(n) :
    for j in range(i+1, n) :
      pairSumMap[A[i]+A[j]].append([i,j])
  answers = []
  for i in pairSumMap:
    if (B-i) in pairSumMap:
      #print(pairSumMap[i], pairSumMap[B-i])
      answers += solveAnswers(pairSumMap[i], pairSumMap[B-i])
  original_answers = []
  for i in answers:
    c = sorted(i)
    if c not in original_answers:
      original_answers.append(c)
  #print(original_answers)
  solution = []
  for i in original_answers:
    a,b,c,d = A[i[0]],A[i[1]],A[i[2]],A[i[3]]
    solution.append(sorted([a,b,c,d]))
  return sorted(solution)

A = [10, 2, 3, 4, 5, 9, 7, 8]
print(fourSum(A, 23))