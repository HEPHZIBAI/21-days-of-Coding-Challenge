/*
https://www.codingninjas.com/studio/problems/crazy-numbers_9065119?challengeSlug=ninja-slayground&leftPanelTab=1
*/


#include <bits/stdc++.h>

vector < vector < int > > numberPattern(int n) {

vector < vector < int > >ans;

int num = 1;

for(int row=1;row<=n;row++){

int cnt = 1;

vector<int>temp(n,-1);

while(cnt<=row){

temp[n-row+cnt-1] = num;

num++,cnt++;

if(num == 10)num = 1;

}

ans.push_back(temp);

}

return ans;

}