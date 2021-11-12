//convert minutes into hours
#include<stdio.h>
void main()
{
	int minutes,a,b;
	scanf("%d",&minutes);
	a=minutes/60;
	b=minutes%60;
	printf(" %d minutes is %d hour and %d minutes",minutes,a,b);
	
}
