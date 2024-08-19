#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

long int fibonacci(int n, vector<long int> &memo)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    if (memo[n] != -1)
    {
        return memo[n]; // Return the cached result
    }

    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo); // Store the result in the memo

    return memo[n];
}

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        cout << "Enter a number" << endl;
        exit(1);
    }

    int n = atoi(argv[1]);

    // Initialize the memoization vector with -1 (indicating un computed values)
    vector<long int> memo(n + 1, -1);

    cout << fibonacci(n, memo) << endl;

    return 0;
}