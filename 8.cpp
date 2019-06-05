#include<stdio.h>
#include<conio.h>
main()
{
    int plaka_kodu;
    
    printf("Ilin plaka kodunu giriniz:");
    scanf("%d",&plaka_kodu);
    
    switch(plaka_kodu){
                       
                       case 6:
                            printf("Ankara");
                            break;
                            
                       case 34:
                            printf("Ýstanbul");
                            break;
                       case 35:
                            printf("Ýzmir");
                            break;
                       case 45:
                            printf("Manisa");
                            break;
                       
                       default:
                               printf("Tanimsiz Plaka Kodu");
                               break;
                               }
    getch();
}
