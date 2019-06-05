#include <stdio.h>
#include <stdlib.h> 

int main (int argc, char *argv[])
{
    int sayi; //5 basamaklý bir sayý girilecek
    printf("5 basamakli bir sayi giriniz :");
    scanf("%d",&sayi);
    printf("%d   ",sayi/10000); //8
    sayi=sayi%10000;  //sayi =2649
    printf("%d   ",sayi/1000);  //2
    sayi=sayi%1000;   //sayi=649
    printf("%d   ",sayi/100);   //6
    sayi=sayi%100;    //ssayi=49
    printf("%d   ",sayi/10);    //4
    sayi=sayi%10;     //sayi=9
    printf("%d   ",sayi/1);
    
    
    
    system("PAUSE");
    return 0;
}
