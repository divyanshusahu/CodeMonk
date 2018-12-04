def checkPrefixLength(s1, s2) :
    length = 0
    for i,j in zip(s1, s2) :
        if i != j :
            length += 1
        if ord(i) > ord(j) :
            return 0

    return length

def increasebyone(s, l) :
    changed_string = ''
    for i in range(l) :
        if ord(s[i]) == 122 :
            return 0
        changed_string += chr(ord(s[i]) + 1)
    changed_string += s[l:]

    return changed_string

def main() :
    sa = raw_input()
    sb = raw_input()

    if len(sa) != len(sb) :
        print "NO"
        return

    prefixLength = checkPrefixLength(sa, sb)
    changed_sa = sa

    while(prefixLength and changed_sa != 0) :
        changed_sa = increasebyone(changed_sa, prefixLength)
        prefixLength = checkPrefixLength(changed_sa, sb)

    if changed_sa == sb :
        print "YES"
    else :
        print "NO"

if __name__ == "__main__" :
    main()
