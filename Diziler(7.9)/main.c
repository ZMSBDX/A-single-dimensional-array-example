#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2 tane n elemanli dizinin skaler carpimini hesaplayan program!\n");

    int i,n,Skaler_carpim=0;

    printf("Lutfen kac elemanli olacagini girniz : ");
    scanf("%d",&n);

    int Sayilar1[n],Sayilar2[n];

    for(i=0;i<n;i++)
    {
        printf("1. dizinin %d.elemani giriniz ",i+1);
        scanf("%d",&Sayilar1[i]);
        printf("2. dizinin %d.elemani giriniz ",i+1);
        scanf("%d",&Sayilar2[i]);
    }


    for(i=0;i<n;i++)
    {
        Skaler_carpim=Skaler_carpim+Sayilar1[i]*Sayilar2[i];
    }

    printf("%d",Skaler_carpim);

    return 0;
}
