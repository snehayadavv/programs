             //Fibonacci Series using Recursion
#include<stdio.h>
#include<time.h>

int fibonacci(int n)
{
if (n <= 1)
    return n;
return fibonacci(n-1) + fibonacci(n-2);
}


