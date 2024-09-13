#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 7, 8, 9, 1, 3, 4, 7, 88, 3};

    int max = arr[0];
    int secondmax = arr[0];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        int curr = arr[i];

        if (curr > max)
        {
            secondmax = max;
            max = curr;
        }
        else if (curr > secondmax)
        {

            secondmax = curr;
        }
    }
    cout << secondmax << endl;
}