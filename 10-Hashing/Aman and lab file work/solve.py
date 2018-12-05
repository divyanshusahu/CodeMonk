import sys

def main() :
	n = input()
	freq = {}
	for i in range(1,n+1) :
		s = raw_input()
		s = s.split(' ')
		ti = int(s[0])
		di = int(s[1])
		if (ti+di) not in freq :
			freq[ti+di] = []
			freq[ti+di].append(i)
		else :
			freq[ti+di].append(i)

	sorted_time = sorted(freq)

	for i in sorted_time :
		order = freq[i]
		#order.sort()
		for o in order :
			sys.stdout.write(str(o))
			sys.stdout.write(' ')		

if __name__ == '__main__':
	main()