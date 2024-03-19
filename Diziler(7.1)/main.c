#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("kac sayi girecigini soran ve sayi kadar diziye eleaman kaydeden program!\n");

    int n,i;

    printf("Kac sayi gireceksiniz : ");
    scanf("%d",&n);

    int Sayilar[n];

    for(i=0;i<n;i++)
    {
        printf("Lutfen %d. Sayiyi girniz : ",i+1);
        scanf("%d",&Sayilar[i]);
    }


    return 0;
}
