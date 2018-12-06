def main() :
	t = input()
	string = 'abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ'
	while(t) :
		try :
			s = raw_input()
		except EOFError :
			break
		x = s.split(' ')
		mul_factor = len(x)
		sum = 0
		for i in x :
			for j in range(len(i)) :
				sum += j + string.find(i[j])

		print mul_factor*sum

		t -= 1

if __name__ == '__main__':
	main()