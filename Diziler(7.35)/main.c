#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Klavyden girilen bir rakami kelime olarak yazdiran program!\n");


    int Sayi=0;
    char *Sayilar[10] = {"Sifir","Bir","Iki","Uc","Dort","Bes","Alti","Yedi","Sekiz","Dokuz"};

    printf("Sayi Giriniz : ");
    scanf("%d",&Sayi);

    if(Sayi<0)
    {
        printf("eksi ");
    }

    Sayi=abs(Sayi);

    printf("%s",Sayilar[Sayi]);









    return 0;
}
