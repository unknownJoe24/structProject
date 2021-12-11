#Program written in Python that returns Fibonacci sequence up to the n-th term

nterm = int(input("Enter Fibonacci term: "))

n0, n1 = 0, 1
term = 0

#
if nterm <= 0:
    print("Please enter a positive integer")
#
elif nterm == 1:
    print("Fibonacci term at ", nterm, ":")
    print(n0)
else: #while loop to print out the sequence until the n-th term is reached
    while term < nterm:
        print(n0)
        nth = n0 + n1
        n0 = n1
        n1 = nth
        term += 1