def encrypt(s, k) :
    cipher = ''
    shift = range(48,58) + range(65,91) + range(97,123)
    for i in s :
        if ord(i) not in shift :
            cipher += i
        else :
            if ord(i) >= 65 and ord(i) <=90 :
                ke = k%26
                y = ord(i) + ke
                if y > 90 :
                    y = y - 90 + 64
                cipher += chr(y)
            elif ord(i) >= 97 and ord(i) <= 122 :
                ke = k%26
                y = ord(i) + ke
                if y > 122 :
                    y = y - 122 + 96
                cipher += chr(y)
            else :
                ke = k%10
                y = ord(i) + ke
                if y > 57 :
                    y = y - 57 + 47
                cipher += chr(y)

    return cipher


def main() :
    s = raw_input()
    k = raw_input()
    print encrypt(s, int(k))

if __name__ == "__main__" :
    main()
