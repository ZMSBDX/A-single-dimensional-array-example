#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("n elemanli bir dizinin aritmatik ve geometrik ort hesaplama!\n");

    int i,n,Toplam,Carpim=1;
    float Aritmatik_Ort,Geometrik_Ort;


    printf("Lutfen kac elemanli olacagini girniz : ");
    scanf("%d",&n);

    int Sayilar[n];

    for(i=0;i<n;i++)
    {
        printf("1. dizinin %d.elemani giriniz ",i+1);
        scanf("%d",&Sayilar[i]);

    }


    for(i=0;i<n;i++)
    {
        Toplam=Toplam+Sayilar[i];
        Carpim*=Sayilar[i];
    }

    Aritmatik_Ort=Toplam/n;
    Geometrik_Ort=pow((double)Carpim,((double)1/n));


    printf("Aritmatik ortalamsi : %f\n geometrik ortalasi : %f",Aritmatik_Ort,Geometrik_Ort);
    return 0;
}
