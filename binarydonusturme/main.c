#include <stdio.h>
#include <stdlib.h>

int ikilidonusturme(int sayi)
{
    if (sayi == 0)
    {
        return 0;
    }
    else
    {
        return (sayi % 2) + 10 * ikilidonusturme(sayi / 2);
    }
}
int main()
{
   int sayi, ikilik;

   printf("Bir sayi giriniz: ");
   scanf("%d", &sayi);
   ikilik = ikilidonusturme(sayi);
   printf("%d sayisinin ikilik degeri %d\n", sayi, ikilik);
}

