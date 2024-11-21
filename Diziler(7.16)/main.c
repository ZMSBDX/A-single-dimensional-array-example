#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Kilavyeden n elemena laip en buyuk ve en kucugu bulan sonra bu en buyuk ve en kucugun dizinin kacinci elemanli oldunu bulan program!\n");

    int n,i,En_Buyuk,En_Kucuk,En_Buyuk_Sira,En_Kucuk_Sira;

    printf("Kac adet sayi gireceksiniz : ");
    scanf("%d",&n);

    int Sayilar[n];

    for(i=0;i<n;i++)
    {
        printf("\n%d.elemani giriniz : ",i+1);
        scanf("%d",&Sayilar[i]);
    }

    En_Buyuk=Sayilar[0];
    En_Kucuk=Sayilar[0];

    for(i=1;i<n;i++)
    {
        if(Sayilar[i]>En_Buyuk)
        {
            En_Buyuk=Sayilar[i];
        }
        if(Sayilar[i]<En_Kucuk)
        {
            En_Kucuk=Sayilar[i];
        }

    }


    for(i=0;i<n;i++)
    {
        if(Sayilar[i]==En_Buyuk)
        {
            En_Buyuk_Sira=i+1;
        }
        if(Sayilar[i]==En_Kucuk)
        {
            En_Kucuk_Sira=i+1;
        }
    }

    printf("\nEn Buyuk sayi : %d dir ve %d. siradadir.\nEn Kucuk sayi : %d dir ve %d. siradadir.",En_Buyuk,En_Buyuk_Sira,En_Kucuk,En_Kucuk_Sira);

    return 0;
}
