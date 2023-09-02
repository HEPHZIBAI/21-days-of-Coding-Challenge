/*
https://www.codingninjas.com/studio/problems/check-difference_9065129?challengeSlug=ninja-slayground&leftPanelTab=1
*/




#include <bits/stdc++.h> 

bool checkDiff(int *arr, int N, int K)
{
    std::unordered_set<int> seen;

    for (int i = 0; i < N; i++)
    {
        // Calculate the value we're looking for to satisfy arr[i] - arr[j] == K
        int target1 = arr[i] - K;
        int target2 = arr[i] + K;

        // Check if the targets are present in the set
        if (seen.find(target1) != seen.end() || seen.find(target2) != seen.end())
        {
            return true;
        }

        // Add the current element to the set
        seen.insert(arr[i]);
    }

    return false;
}
