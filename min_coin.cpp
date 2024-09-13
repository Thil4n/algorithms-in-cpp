#include <iostream>
#include <climits>

using namespace std;

int coins[] = {1, 4, 5};

int num_coins = sizeof(coins) / sizeof(coins[0]);

int minimum_coins(int m, vector<int> &memo)
{

    if (memo[m] != -1)
    {
        return memo[m];
    }

    if (m == 0)
    {
        return 0;
    }

    int min = INT_MAX;

    for (int i = 0; i < num_coins; i++)
    {
        int coin = coins[i];

        if (coin > m)
        {
            continue;
        }

        int x = minimum_coins(m - coin, memo);
        if (x < min)
        {
            min = x;
        }
    }

    memo[m] = min + 1;

    return memo[m];
}

int main(int argc, char const *argv[])
{
    int amount = atoi(argv[1]);

    vector<int> memo(amount + 1, -1);

    cout << minimum_coins(amount, memo) << endl;
    return 0;
}
