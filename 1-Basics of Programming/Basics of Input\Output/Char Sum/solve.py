'''
# Sample code to perform I/O:

name = raw_input()          # Reading input from STDIN
print 'Hi, %s.' % name      # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
def main() :
    s = raw_input()
    weight = 0
    for i in s :
        weight += ord(i) - 96
    print weight

if __name__ == "__main__" :
    main()
