#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Kalvyeden girilen 2 dizi yi toplayip baska bir diziye yazmak!\n");

    int n,i;

    printf("Diziler de lutfen kac elemanli dizi olacagini yaziniz : ");
    scanf("%d",&n);

    int n1[n],n2[n],Toplam[n];

    for(i=0;i<n;i++)
    {
        printf("1.diznini %d.",i+1);
        scanf("%d",&n1[i]);
        printf("2.diznini %d.",i+1);
        scanf("%d",&n2[i]);
        Toplam[i]=n1[i]+n2[i];

    }


    return 0;
}
