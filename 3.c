#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        printf("%d\n",i);
    getch();
    return 0;
}
