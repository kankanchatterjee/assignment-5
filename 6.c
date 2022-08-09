#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=2*n;i+=2)
        printf("%d\n",i);
    getch();
    return 0;
}

