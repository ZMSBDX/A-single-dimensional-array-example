#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("N tane ogrencinin not ortalamasinin alip not ortalamasi altindaki ogrencilerin gecme kalma durumunu yazan program!\n");

    int i,n,Ort,Toplam;

   printf("\nKac ogrenci var : ");
   scanf("%d",&n);


    int Notlar[n];

    for(i=0;i<n;i++)
    {
    printf("%d. Ogrencinin notunu giriniz.",i+1);
    printf("\nNot :");
    scanf("%d",&Notlar[i]);
    }

    for(i=0;i<n;i++)
    {
        Toplam+=Notlar[i];
    }

    Ort=Toplam/n;

    for(i=0;i<n;i++)
    {
        if(Notlar[i]>=Ort)
        {
            printf("\n%d. ogrenci %d not ile Gecti",i+1,Notlar[i]);
        }
        else
        {
            printf("\n%d. ogrenci %d not ile Kaldi",i+1,Notlar[i]);
        }

    }



    return 0;
}
