/*
https://www.codingninjas.com/studio/problems/check-armstrong_9065114?challengeSlug=ninja-slayground&leftPanelTab=1
*/


#include <stdio.h>
#include<math.h>
int main() 
{
	int a;
	scanf("%d",&a);
	int t=a;
	int m;
	int u[10000000];
	int k=0,s=0;
	while(a>0)
	{
		m=a%10;
		u[k]=m;
		k++;
		a/=10;
	}
	for(int i=0;i<k;i++)
	{
		s+=(pow(u[i],k));
	}
	if(s==t)
	printf("true");
	else
	printf("false");
}

