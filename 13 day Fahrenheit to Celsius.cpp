/*
https://www.codingninjas.com/studio/problems/fahrenheit-to-celsius_9065121?challengeSlug=ninja-slayground&leftPanelTab=1
*/




#include <bits/stdc++.h> 
vector<vector<int>> fahrenheitToCelsius(int s, int e, int w)
{
	//type your code here
	vector<vector<int>> result;
 for (int i = s; i <= e; i += w) {
        vector<int> d;
        d.push_back(i);
        int c = static_cast<int>((i - 32) * 5.0 / 9.0); // Corrected Celsius conversion formula
        d.push_back(c);
        result.push_back(d);
    }
    return result;
	}