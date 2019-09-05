def fraction(n,d):
  q = n/d
  r = n%d
  hash_map = {}
  solution = str(q)
  isRap = False
  rep = ""
  while r != 0:
    x = r*10
    r = x%d
    q = x/d
    if r in hash_map:
      isRap = True
      break
    hash_map[r] = 1
    rep += str(q)
  if rep != "" and isRap:
    solution = solution + "." + "(" + rep + ")"
  if rep != "" and not isRap:
    solution = solution + "." + rep
  return solution

print(fraction(5,8))
