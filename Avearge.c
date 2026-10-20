#include<stdio.h>
void main()
{float sst,sci,math,total,avg;
 printf("Enter Marks of SST: ");
 scanf("%f",&sst);
 printf("Enter Marks of SCI: ");
 scanf("%f",&sci);
 printf("Enter Marks of MATH: ");
 scanf("%f",&math);
 total=sst+sci+math;
 avg=total/3;
 printf("Total Marks= %.2f\n",total);
 printf("Average Of Three Subjects = %.2f\n",avg);

 }
