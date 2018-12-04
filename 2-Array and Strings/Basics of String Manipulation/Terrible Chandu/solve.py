def main() :
	t = input()
	while(t) :
		s = raw_input()
		print s[::-1]
		t -= 1

if __name__ == '__main__':
	main()