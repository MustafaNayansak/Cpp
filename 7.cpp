#include <stdio.h>
#include <stdlib.h> 

int main (int argc, char *argv[])
{
    int x,y;
    printf("iki sayi giriniz :");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
           printf("%d en buyuktur\n",x);
    }
    if(y>x)
    {
           printf("%d en buyuktur\n",y);   //mustafa sen bu iþi biliyosun kardeþim
    }
    if(x==y)
    {
           printf("%d esittir %d",x,y);
    }
    
    system("pause");
    return 0;
}           
