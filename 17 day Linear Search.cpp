/*
https://www.codingninjas.com/studio/problems/linear-search_9065125?challengeSlug=ninja-slayground&leftPanelTab=1
*/




int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    int k=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            k=i;
            break;
        }
    }
    return k;
}
