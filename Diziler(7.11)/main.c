#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int main()
{
    printf(" a(n)X^n+a(n-1)X^(n-1) .... seklinde n derededen polinomu x hesaplayan program!\n");

    int x,i,n;
    float cevap;

    printf("Lutfen kac elemanli olacagini girniz : ");
    scanf("%d",&n);

    int Sayilar[n];
    for(i=0;i<n;i++)
    {
        printf("dizinin %d.elemani giriniz ",i+1);
        scanf("%d",&Sayilar[i]);

    }

    printf("\n x : ");
    scanf("%d",&x);

    for(i=n;i>0;i--)
    {
        cevap+=Sayilar[i-1]*pow((double)x,(double)i-1);
    }


    printf("sonuc : %f",cevap);



    //a(3)X^3 + a(2)X^2 + a(1)X^1 + a(0)X^0 = cevap

    //4         3         2         1

    //x=2

    return 0;
}
