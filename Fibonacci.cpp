//program written in C++ that returns the n-th Fibonacci term

#include <iostream>

int fib(int);

int main()
{
    int n;
    //user input for n
    std::cout << "Enter Fibonacci term: " << std::endl;
    std::cin >> n;
    //call fib using n
    fib(n);
    return 0;
}

int fib(int term)
{
    //setup starting terms
    int n0 = 0;
    int n1 = 1;
    int count = 0;

    //check if number of terms is valid
    if (term <= 0)
    {
        std::cout << "Please enter a positive integer.";
    }
    //if only one term return n0
    else if (term == 1)
    {
        std::cout << "Fibonacci sequence at " << term << ": " << n0 << std::endl;
    }
    else
    {
        std::cout << "Fibonacci sequence: " << std::endl;
        while (count < term) //loop to print out sequence until the n-th term is reached
        {
            std::cout << n0 << std::endl;
            int nth = n0 + n1;
            n0 = n1;
            n1 = nth;
            count += 1;
        }
    }
    return n0;
}