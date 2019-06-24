#include<stdio.h>
#include<conio.h>

int main(int argc,char *argv[])
{
    int baslangic,bitis,i;
    int toplam=0;
    printf("baslangic ve bitis degerlerini giriniz:\n");
    scanf("%d%d",&baslangic,&bitis);
    for(i=baslangic;i<=bitis;i++)
    {
                                 toplam +=i;
    }
    printf("%d",toplam);

getch();
}
