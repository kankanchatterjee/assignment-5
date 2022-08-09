#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",i*i);
    getch();
    return 0;
}
