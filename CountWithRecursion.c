/*
Program to print 1-100 numbers without any Control statment(With Recursion).
*/
#include<stdio.h>
void count(int k)
{
	if(k==101)
		return;
	printf("%d\t\t ",k++);
	count(k);
}
main()
{
	count(1);
}


