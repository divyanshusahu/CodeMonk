'''
# Sample code to perform I/O:

name = raw_input()          # Reading input from STDIN
print 'Hi, %s.' % name      # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
def check(s) :
    vowles = ['A', 'E', 'I', 'O', 'U', 'Y']
    if s[2] in vowles :
        return 0
    if (int(s[0]) + int(s[1])) % 2 == 1 :
        return 0
    if (int(s[3]) + int(s[4])) % 2 == 1 :
        return 0
    if (int(s[4]) + int(s[5])) % 2 == 1 :
        return 0
    if (int(s[7]) + int(s[8])) % 2 == 1 :
        return 0
    return 1

def main() :
    s = raw_input()
    if check(s) :
        print 'valid'
    else :
        print 'invalid'

if __name__ == "__main__" :
    main()
        
