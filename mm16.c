#include<stdio.h>
#include<conio.h>
#include <math.h>
void main()
{
    int n,i,b,j,c;
    printf("enter the start number n");
    scanf("%d",&n);
    printf("\nenter the last number b");
    scanf("%d",&b);
    for(i=n;i<b;i++)
    {c=0;
    for(j=2;j<=sqrt(i);j++)
    if(i%j==0)
    {
        c=1;
        break;}
        if(c==0){
    printf("\nThe prime number is: %d",i);}
}
getch();
}
