def main() :
    t = int(raw_input())
    while(t) :
        n = int(raw_input())
        s = raw_input()
        """count = 0
        for i in s :
            if i == '0' :
                count += 1
        print count"""
        print s.count('0')
        t -= 1

if __name__ == "__main__" :
    main()
