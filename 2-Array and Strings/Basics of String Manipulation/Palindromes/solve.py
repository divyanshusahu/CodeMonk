def main() :
	s = raw_input()
	if s != s[::-1] :
		print len(s)
		return

	freq = {}
	for i in s :
		if i not in freq :
			freq[i] = 1
		else :
			freq[i] += 1
	
	if len(freq) == 1 :
		print '0'
	else :
		print len(s) - 1

if __name__ == '__main__':
	main()