def check(s) :
    if len(s) != 10 :
        return 0
    ts = 0
    for i in range(10) :
        ts += (i+1)*int(s[i])
    if ts % 11 != 0 :
        return 0
    return 1

def main() :
    s = raw_input()
    if check(s) :
        print 'Legal ISBN'
    else :
        print 'Illegal ISBN'

if __name__ == "__main__" :
    main()
