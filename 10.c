#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        printf("%d x %d = %d\n",n,i,n*i);
    getch();
    return 0;
}
