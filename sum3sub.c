//sum of three subjects
#include<stdio.h>
void main()
{
	int eng,maths,phy,sum;
	printf("Enter the marks for English,Maths,Physics\n");
	scanf("%d%d%d",&eng,&maths,&phy);
	sum=eng+maths+phy;
	printf("The sum of three subjects is %d",sum);
}
