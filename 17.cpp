#include<stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
    int n,i,faktoriyel=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
                     faktoriyel *=i;
    }
    printf("%d",faktoriyel);
    getch();
}
