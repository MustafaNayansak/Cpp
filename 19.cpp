#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
      int sayi,gezici,kontrol=0;
      scanf("%d",&sayi);
      for(gezici=2;gezici<sayi;gezici++)
      {
                                        if(sayi%gezici==0)
                                        {
                                                          kontrol=1;
                                                          break;
                                        }
      }
      if(kontrol==0)
      {
                    printf("\nsayi asaldir");
      }
      else
                    printf("\nsayi asal degildir");
      
      system("PAUSE");
      return 0;
}
