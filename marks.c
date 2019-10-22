//Program 11: Program to input msrks of 5 subjects and give grade according to average
#include <stdio.h>
main()
{
	int sum=0,avg,sub1,sub2,sub3,sub4,sub5;
	printf("Enter marks in English:");
	scanf("%d",&sub1);
	printf("Enter marks in Maths:");
	scanf("%d",&sub2);
	printf("Enter marks in Physics:");
	scanf("%d",&sub3);
	printf("Enter marks in Chemistry:");
	scanf("%d",&sub4);
	printf("Enter marks in Computer:");
	scanf("%d",&sub5);
	sum=sub1+sub2+sub3+sub4+sub5;
	avg=sum/5;
	printf("Your Averrage is: %d \nAnd Your Grade is: \n",avg);
	if(avg>90)
		printf("O");
	else if(avg>80)
		printf("E");
	else if(avg>70)
		printf("A");
	else if(avg>=50)
		printf("B");
	else
		printf("Fail");
	printf("\n");
}
/*
Output:
Enter marks in English:86
Enter marks in Maths:54
Enter marks in Physics:73
Enter marks in Chemistry:62
Enter marks in Computer:98
Your Averrage is: 74 
And Your Grade is: 
A
*/
