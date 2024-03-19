#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("n elemanli dizini bir k sayisi ile carpiminin baska bir diziye yazilmasi!\n");

    int sayi,n,i;

    printf("Lutfen kac elemanli dizi olacagini girniz : ");
    scanf("%d",&n);
    printf("Lutfen carpmak istediginiz sayiyi giriniz : ");
    scanf("%d",&sayi);

    int n1[n],sonuc[n];

    for(i=0;i<n;i++)
    {
        printf("Lutfen %d. elemani girniz : ",i+1);
        scanf("%d",&n1[i]);
        sonuc[i]=n1[i]*sayi;
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",sonuc[i]);
    }

    return 0;
}
