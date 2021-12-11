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

    //
    if (term <= 0)
    {
        std::cout << "Please enter a positive integer.";
    }
    else if (term == 1)
    {
        std::cout << "Fibonacci term at " << term << ":" << n0 << std::endl;
    }
    else
    {
        while (count < term)
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