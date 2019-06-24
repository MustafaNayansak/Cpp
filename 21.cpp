#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sayi,tersi=0;
    scanf("%d",&sayi);
    while(sayi>0)
    {
                 tersi*=10;
                 tersi+=sayi%10;
                 sayi/=10;
    }
    printf("Sayinin tersi = %d",tersi);
    
    
    
    
    
    
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
