#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("girilen 2 Basamakli Bir sayiyi yazi olarak yazdirma!\n");


    int Sayi,Birler_B,Onlar_B;

    char *Birler[10] = {"Sifir","Bir","Iki","Uc","Dort","Bes","Alti","Yedi","Sekiz","Dokuz"};
    char *Onlar[10] = {"","On","Yirmi","Otuz","Kirk","elli","Altmis","Yetmis","Seksen","Doksan"};

    printf("Sayi Giriniz : ");
    scanf("%d",&Sayi);

    printf("%d --->  ",Sayi);

    if(Sayi<0)
    {
        printf("eksi ");
    }

    Sayi=abs(Sayi);



    Birler_B=Sayi%10;
    Onlar_B=Sayi/10;

    printf("%s %s",Onlar[Onlar_B],Birler[Birler_B]);





    return 0;
}
