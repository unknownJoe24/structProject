#Program written in Python that returns Fibonacci sequence up to the n-th term

nterm = int(input("Enter Fibonacci term: "))

def fib(num):

    #define variables
    n0, n1 = 0, 1
    term = 0
    #check if number of terms is valid
    if num <= 0:
        print("Please enter a positive integer")
    #if only one term return n0
    elif num == 1:
        print("Fibonacci term at ", nterm, ":")
        print(n0)
    else: #while loop to print out the sequence until the n-th term is reached
        while term < num:
            print(n0)
            nth = n0 + n1
            n0 = n1
            n1 = nth
            term += 1

fib(nterm)