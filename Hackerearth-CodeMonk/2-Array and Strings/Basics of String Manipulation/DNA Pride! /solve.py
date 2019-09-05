import sys

def main() :
	t = int(raw_input())
	while(t) :
		try :
			n = int(raw_input())
		except EOFError :
			break
		s = raw_input()
		s = s.upper()
		if s.find('U') >= 0 :
			print 'Error RNA nucleobases found!'
			continue

		new_string = ''

		for i in s :
			if i == 'A' :
				new_string += 'T'
			elif i == 'T' :
				new_string += 'A'
			elif i == 'G' :
				new_string += 'C'
			elif i == 'C' :
				new_string += 'G'

		print new_string
		t -= 1

if __name__ == '__main__':
	main()