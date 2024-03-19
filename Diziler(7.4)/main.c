#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Kalvyeden girilen n elemanli dizinin tum elemanlarini toplayan program!\n");

    int n,i,toplam;

    printf("Lutfen kac elemanli dizi olacagini giriniz : ");
    scanf("%d",&n);
    int Sayilar[n];

    for(i=0;i<n;i++)
    {
        printf("%d.elamani giriniz : ",i+1);
        scanf("%d",&Sayilar[i]);
        toplam += Sayilar[i];

    }

    printf("%d",toplam);

    return 0;
}
