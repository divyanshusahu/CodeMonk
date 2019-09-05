def main() :
	t = int(raw_input())
	while(t) :
		s = raw_input()
		v = s.count('a') + s.count('e') + s.count('i') + s.count('o') + s.count('u')
		print v
		t -= 1

if __name__ == '__main__':
	main()