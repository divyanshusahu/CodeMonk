def main() :
	t = int(raw_input())
	while(t) :
		s = raw_input()
		if s == s[::-1] :
			print "YES"
		else :
			print "NO"
		t -= 1

if __name__ == '__main__':
	main()