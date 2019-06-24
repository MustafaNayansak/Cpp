#include<stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
    float v,f,gn,toplam;
    int ogrenci,ders;
    
    for(ogrenci=1;ogrenci<=5;ogrenci++)
    {
                                 toplam=0;
                                 for(ders=1;ders<=3;ders++)
                                 {
                                                           printf("Ogrenci %d: Ders %d icin Vize ve Final Notlarini Giriniz\n",ogrenci,ders);
                                                           scanf("%f%f",&v,&f);
                                                           gn=0.4*v+0.6*f;
                                                           printf("Ogrenci %d: Ders %d icin gecme notu = %f\n\n\n\n\n",ogrenci,ders,gn);
                                                           toplam+=gn;
                                 }
                                 printf("ogrenci %d icin gecme notu ortalamasi = %f\n\n\n",ogrenci,toplam/3);
    }
    getch();
}
                                                           
