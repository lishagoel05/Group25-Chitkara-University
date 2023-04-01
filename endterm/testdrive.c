#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	
	printf("Enter a five digit number : ");
	scanf("%d", &num);
	
	num = num + 11111;
	
	printf("%d is the asked number.",num);
	
	getch();
	return 0;
}