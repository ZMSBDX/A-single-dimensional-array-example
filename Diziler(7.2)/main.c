#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Girilen n elemanli bir dizinin elemanlarini yazdirma!\n");


    int n,i;

    printf("Kac sayi gireceksiniz : ");
    scanf("%d",&n);
    int Sayilar[n];

    for(i=0;i<n;i++)
    {   int sayi;
        printf("\n%d -sayi gitiniz : ",i+1);
        scanf("%d",&Sayilar[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("\n%d",Sayilar[i]);
    }

    return 0;
}
