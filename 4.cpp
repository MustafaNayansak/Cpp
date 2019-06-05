#include <stdio.h>
#include <stdlib.h> 

int main (int argc, char *argv[])
{
    int sayi;  //5 basamaklı sayı girilecek
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    printf("10luk tabandaki degeri = %d\n",sayi);
    printf("16lik tabandaki degeri = %x\n",sayi);
    printf("8luk tabandaki degeri = %o\n",sayi);
    system("pause");
    return 0;
}
