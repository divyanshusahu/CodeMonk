def main() :
	t = int(raw_input())
	while(t) :
		try :
			s = raw_input()
		except EOFError :
			break
		f = 0
		for i in range(len(s) - 1) :
			if abs(ord(s[i]) - ord(s[i+1])) != 1 and abs(ord(s[i]) - ord(s[i+1])) != 25 :
				print 'NO'
				f = 1
				break
		if f :
			t -= 1
			continue
		print 'YES'
		t -= 1

if __name__ == '__main__':
	main()