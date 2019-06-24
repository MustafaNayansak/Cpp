#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
             int sayi,b=0;
             scanf("%d",&sayi);
             while(sayi>0)
             {
                          sayi/=10;
                          b++;
             }
             printf("Basamak sayisi = %d",b);
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
