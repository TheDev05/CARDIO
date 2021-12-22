/* Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

	https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1#
    */

/* Modification in sliding window problem */

#include <bits/stdc++.h>
using namespace std;

deque<int> result;
for (int i = 0; i < K; i++)
{
    if (A[i] < 0)
    {
        result.push_back(A[i]);
    }
}

vector<int> num;
if (result.size())
{
    num.push_back(result[0]);
}


int index = 0, index = 0;
for (int i = K; i < N; i++)
{
    if (A[i] < 0)
    {
        result.push_back(A[i]);
    }

    if (A[index] < 0)
    {
        result.pop_front();
    }

    if (result.size() != 0)
    {
        num.push_back(result.front());
    }

    index++;
}

return (num);
