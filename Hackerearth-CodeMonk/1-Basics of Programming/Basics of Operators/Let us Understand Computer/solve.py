def main() :
    t = int(raw_input())
    while(t) :
        n = int(raw_input())
        div = 1
        while(True) :
            q = n/div
            blen_div = len(bin(div))
            blen_q = len(bin(q))
            if blen_q > blen_div :
                div += 1
                continue
            else :
                break

        print (n-div+1)
        t -= 1

if __name__ == "__main__" :
    main()
