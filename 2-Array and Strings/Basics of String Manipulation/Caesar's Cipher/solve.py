def shift(s, k) :
	result = ''
	for i in s :
		li = ord(i) - 65
		ls = (li + k) % 26
		ls += 65
		result += chr(ls)
	return result

def main() :
		t = input()
		while(t) :
			s1 = raw_input()
			s2 = raw_input()
			f = 0

			for k in range(26) :
				ru = shift(s1, k)
				if ru == s2 :
					print k
					f = 1
					break

			if f == 0 :
				print '-1'
			t -= 1

if __name__ == '__main__':
	main()