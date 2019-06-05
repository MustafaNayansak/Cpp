#include<stdio.h>
#include<conio.h>
main()
{
      int n=-1,s=0;
      while(n!=0)
      {
                 printf("Bir sayi giriniz:");
                 scanf("%d",&n);
                 s+=n;
      }
      
      printf("\nToplam=%d",s);
      getch();
}
                 
