def main() :
	n = input()
	s = raw_input()
	ans = "NO"

	if s.find('a') == -1 :
		print ans
		return
	if s.find('e') == -1 :
		print ans
		return
	if s.find('i') == -1 :
		print ans
		return
	if s.find('o') == -1 :
		print ans
		return
	if s.find('u') == -1 :
		print ans
		return

	ans = "YES"
	print ans

if __name__ == '__main__':
	main()