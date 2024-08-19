#include <iostream>
#include <stdlib.h>

/*

Longest Increasing Subsequence (LIS)

Given an array of integers, the task is to find the length of the longest subsequence
in which the elements are sorted in strictly increasing order.The subsequence does not
have to be contiguous, meaning that elements can be selected from different parts of
the array as long as they maintain the increasing order.

10,22,9,33,21,50,41,60,80

The longest increasing subsequence in this array is 10,22,33,50,60,80 .

which has a length of 6.

*/

using namespace std;

long int lis(int *arr, int n)
{

    return 5;
}

int main(int argc, char const *argv[])
{

    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout
        << lis(arr, n) << endl;

    return 0;
}