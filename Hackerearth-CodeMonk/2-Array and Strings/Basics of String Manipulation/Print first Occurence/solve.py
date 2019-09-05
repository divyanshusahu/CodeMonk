import sys

def main() :
    t = int(raw_input())
    while(t) :
        s = raw_input()
        present = []
        for i in s :
            if i not in present :
                sys.stdout.write(i)
                present.append(i)
        print ''
        t -= 1

if __name__ == "__main__" :
    main()
