#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sayi,toplam=0,i;
    scanf("%d",&sayi);
    for(i=1;i<=(sayi/2);i++)
    {
                            if(sayi%i==0)
                            toplam+=i;
    }
    if(sayi==toplam)
    printf("Mukemmel sayidir\n");
    else
    printf("Mukemmel sayi degildir\n");
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
