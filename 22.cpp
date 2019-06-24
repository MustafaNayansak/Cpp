#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sayi,sayi1,tersi=0;
    scanf("%d",&sayi);
    sayi1=sayi;
    while(sayi>0)
    {
                 tersi*=10;
                 tersi+=sayi%10;
                 sayi/=10;
    }   
    if(tersi==sayi1)
    {
    printf("Sayi palidrome sayidir");
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
