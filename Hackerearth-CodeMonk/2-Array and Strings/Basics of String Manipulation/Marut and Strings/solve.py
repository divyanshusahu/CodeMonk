def main() :
	t = raw_input()
	try :
		t = int(t)
	except :
		print 'Invalid Test'
		return
	if t<1 or t>10 :
		print "Invalid Test"
		return
	while(t) :
		try :
			s = raw_input()
		except EOFError :
			break
		if len(s) > 100 :
			print 'Invalid Input'
			break
		alphabets_U = range(65,91)
		alphabets_L = range(97,123)
		freq = {}
		freq['U'] = 0
		freq['L'] = 0
		for i in s :
			if ord(i) in alphabets_U :
				freq['U'] += 1
			elif ord(i) in alphabets_L :
				freq['L'] += 1

		if freq['U'] + freq['L'] == 0 :
			print 'Invalid Input'
		else :
			print min(freq['U'], freq['L'])

		t -= 1

if __name__ == '__main__':
	main()