/*
https://www.codingninjas.com/studio/problems/1-to-n-without-loop_9065112?challengeSlug=ninja-slayground&leftPanelTab=1
*/


vector<int> printNos(int x) 
{
     vector<int> a;
    int k=0,i=1;
    while (i <= x) 
    {
        a.push_back(i);
        i++;
    }
    return a;
}