#include <iostream>
#include <climits>

using namespace std;

int coins[] = {1, 4, 5};

int num_coins = sizeof(coins) / sizeof(coins[0]);

int minimum_coins(int m, int coin_count, vector<int> &memo)
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

        int x = minimum_coins(m - coin, coin_count + 1, memo);
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

    cout << minimum_coins(amount, 0, memo) << endl;
    return 0;
}
