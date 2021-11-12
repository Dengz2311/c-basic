#include<stdio.h>
void main()
{
	int side,area,p,l,b,per;
	scanf("%d",&side);
	area=side*side;
	p=4*side;
	printf("The area of the square is %d and the perimeter is %d",area,p);
	scanf("%d%d",&l,&b);
	area=l*b;
	per=2*(l+b);
	printf("The area and perimeter of rectangle is %d and %d ",area,per); 
}
