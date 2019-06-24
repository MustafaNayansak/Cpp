#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sayi1,sayi2;
    do
    {
    scanf("%d%d",&sayi1,&sayi2);
    }
    while(sayi1<=0 || sayi2<=0 || sayi1==sayi2);
    
    for(i=sayi1+1;i<=sayi2;i++)
    {
                             if(i%7==0)
                             toplam+=i;
    }
    printf("toplam=%d",toplam)
    
    
    
    
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
