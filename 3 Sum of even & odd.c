/*
https://www.codingninjas.com/studio/problems/sum-of-even-odd_9065111?challengeSlug=ninja-slayground&leftPanelTab=1
*/


#include <stdio.h>
int main() 
{
	int n;
	scanf("%d",&n);
	int e=0;
	int o=0;
	int m;
	while(n>0)
	{
		m=n%10;
		if(m%2==0)
			e+=m;
		else
			o+=m;
		n/=10;
	}
	printf("%d %d",e,o);
}