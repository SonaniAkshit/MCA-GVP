#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,*b;
	b=&a;
	
	printf("\n value of a:%d",a);
	printf("\n value of a:%d",*(&a));
	printf("\n value of a:%d",*b);
	printf("\n Address of a:%u",&a);
	printf("\n Address os a:%d",b);
	printf("\n Address of b:%u",&b);
	printf("\n value of b = address of a = %u", b);
}
