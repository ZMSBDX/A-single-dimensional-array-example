#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("tum elemanlari 0 olan n elemanli bir dizi!\n");

    int n,i;

    printf("Lutfen eleman sayisini girniz : ");
    scanf("%d",&n);

    int Sayilar[n];

    for(i=0;i<n;i++)
    {
        Sayilar[i]=0;
    }

    for(i=0;i<n;i++)
    {
        printf("\n %d",Sayilar[i]);
    }


    return 0;
}
