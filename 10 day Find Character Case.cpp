/*
https://www.codingninjas.com/studio/problems/find-character-case_9065118?challengeSlug=ninja-slayground
*/




#include <bits/stdc++.h> 
int findCase(char ch) {
    // Write your code here.
    if(ch>='A'&&ch<='Z')
    return 1;
    else if(ch>='a'&&ch<='z')
    return 0;
    else
    return -1;
}