#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=0,b=0,j=0;
    printf("enter the start number n");
    scanf("%d",&n);
    n=j;
    while(n>0)
    {
        i=n%10;
       b=b+i*i*i;
       n=n/10;
    }
    if(j==b)
    {
    printf("\nThe amstrong number. ");
        
    }
    else
    {
        printf("not amstrong");
    }
getch();
}
