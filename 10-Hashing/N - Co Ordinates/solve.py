def main() :
	t = input()
	freq = {}
	while(t) :
		n = raw_input()
		if n in freq :
			freq[n] += 1
		else :
			freq[n] = 1
		t -= 1
	
	s_freq = sorted(freq)
	for key in s_freq :
		print key, freq[key]

if __name__ == '__main__':
	main()