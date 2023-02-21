#include<stdio.h>
int main()
{
float P , R , T , SI ;
printf("enter the principal:\n");
printf("enter the time:\n");
printf("enter the rate:\n");
scanf("%d %f %f",&P,&T,&R);
SI = (P*R*T)/100;
printf("\n\n Simple Interest is : %f", SI);
return 0;
}
