def main() :
	n = input()
	freq = {}
	while(n) :
		name = raw_input()
		if name in freq :
			freq[name] += 1
		else :
			freq[name] = 1
		n -= 1
	sorted_keys = sorted(freq)
	for key in sorted_keys :
		print key, freq[key]

if __name__ == '__main__':
	main()