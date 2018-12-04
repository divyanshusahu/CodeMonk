def main() :
    t = int(raw_input())
    while(t) :
        n = raw_input()
        n1 = n[::-1]

        if n == n1 :
            print "YES"
        else :
            print "NO"
        t -= 1

if __name__ == "__main__" :
    main()
