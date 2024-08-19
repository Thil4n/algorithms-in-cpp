#include <iostream>
#include <stdlib.h>

using namespace std;

long int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    long int prev_sum = 0, sum = 1;

    for (int i = 2; i <= n; i++)
    {
        long int temp = sum;
        sum += prev_sum;
        prev_sum = temp;
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        cout << "Enter a number" << endl;
        exit(1);
    }

    int n = atoi(argv[1]);

    cout << fibonacci(n) << endl;

    return 0;
}