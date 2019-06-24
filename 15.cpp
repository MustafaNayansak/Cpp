#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b)
    {
            if(c<=b)
            printf("%d>=%d>=%d",a,b,c);
            if(c>=a)
            printf("%d>=%d>=%d",c,a,b);
            if(c>=b && c<=a)
            printf("%d>=%d>=%d",a,c,b);
    }
    else
    {
            if(c<=a)
            printf("%d>=%d>=%d",b,a,c);
            if(c>=b)
            printf("%d>=%d>=%d",c,b,a);
            if(c>=a && c<=b)
            printf("%d>=%d>=%d",b,c,a);
    }
    
    
    
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
