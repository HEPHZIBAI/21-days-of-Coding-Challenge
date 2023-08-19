/*
https://www.codingninjas.com/studio/problems/sum-of-first-n-numbers_9065113?challengeSlug=ninja-slayground&leftPanelTab=1
*/


int sumFirstN(int n) {
    // Write Your Code Here
    int s=0;
    while (n > 0) {
    s+=n;
    n--;
    }
    return s;
}