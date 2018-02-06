#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,b;
    printf("enter the start number n");
    scanf("%d",&n);
    printf("\nenter the last number b");
    scanf("%d",&b);
    for(i=n+1;i<b;i++)
    {
    if(i%2!=0)
    {
    printf("\nThe odd number is: %d",i);
}}
getch();
}
