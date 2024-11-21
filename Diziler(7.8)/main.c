#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bir dizinin elemanlarini tersten baska bir dizi kullanmadan yazan program!\n");

    int i,n,gecici;

    printf("Lutfen kac elemanli olacagini girniz : ");
    scanf("%d",&n);

    int Sayilar[n];

    for(i=0;i<n;i++)
    {
        printf("%d.elemani giriniz ",i+1);
        scanf("%d",&Sayilar[i]);
    }


   for(i=0;i<n/2;i++)
   {
       gecici=Sayilar[i];
       Sayilar[i]=Sayilar[n-i-1];
       Sayilar[n-i-1]=gecici;
   }


    for(i=0;i<n;i++)
    {

        printf("\n%d",Sayilar[i]);

    }





    return 0;
}
