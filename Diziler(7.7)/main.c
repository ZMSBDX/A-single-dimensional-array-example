#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bir diziyi baska bir diziye tersten yazma!\n");

    int i,n;

    printf("Lutfen kac elemanli dizi gireceksin : ");
    scanf("%d",&n);

    int Sayilar[n],Ters_Sayilar[n];


    for(i=0;i<n;i++)
    {
        printf("Lutfen %d. elemani giriniz : ",i+1);
        scanf("%d",&Sayilar[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        Ters_Sayilar[n-i-1]=Sayilar[i];
    }

    for(i=0;i<n;i++)
    {
        printf("\n%d",Ters_Sayilar[i]);
    }


    return 0;
}
