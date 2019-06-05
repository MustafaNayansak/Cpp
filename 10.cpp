#include<stdio.h>
#include<conio.h>
main()
{
      int x,y;
      char c;
      
      printf("Bir islem giriniz:");
      scanf("%c",&c);
      
      printf("Sayilari giriniz:");
      scanf("%d%d",&x,&y);
      
      
                          switch(c)
                          {
                
                          case '+':
                          printf("Cevap= %d",x+y);
                          break;
                          case '-':
                          printf("Cevap = %d",x-y);
                          break;
                          default: 
                          printf("Gecersiz operator girdiniz... \n");
                          }
                
      getch();
}
