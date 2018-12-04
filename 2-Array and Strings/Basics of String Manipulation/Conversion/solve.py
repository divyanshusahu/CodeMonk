def main() :
	t = int(raw_input())
	while(t) :
		s = raw_input()
		s = s.lower()
		result = ''
		for i in s :
			if ord(i) == 32 :
				result += '$'
				continue
			result += str(ord(i) - 96)
		print result
		t -= 1

if __name__ == '__main__':
	main()