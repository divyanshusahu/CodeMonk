def main() :
	t = int(raw_input())
	pass_list = []
	while(t) :
		s = raw_input()
		pass_list.append(s)
		t -= 1
	for i in pass_list :
		if i[::-1] in pass_list :
			print len(i), i[len(i)/2]
			break

if __name__ == '__main__':
	main()