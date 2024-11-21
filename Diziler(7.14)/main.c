#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Kilavyeden girilen n sayiyi diziye alip pozotif elemanlarini bir diziye negatif olanlari baska diziye yazan program!\n");
    int n,i,P=0,N=0,S=0;

    printf("\nKac adet sayi gireceksiniz : ");
    scanf("%d",&n);

    int Sayilar[n];

    for(i=0;i<n;i++)
    {
    printf("%d. Sayiyi giriniz.",i+1);
    scanf("%d",&Sayilar[i]);
    }

    for(i=0;i<n;i++)
    {
        if(Sayilar[i]>0)
        {
            P++;
        }
        else if(Sayilar[i]<0)
        {
            N++;
        }
        else
        {
            S++;
        }
    }

    int Pozitif_Sayilar[P],Negatif_Sayilar[N],Sifir_Sayilar[S];
    P=0;
    N=0;
    S=0;

    for(i=0;i<n;i++)
    {
        if(Sayilar[i]>0)
        {
            Pozitif_Sayilar[P]=Sayilar[i];
            P++;
        }
        else if(Sayilar[i]<0)
        {
            Negatif_Sayilar[N]=Sayilar[i];
            N++;
        }
        else
        {
            Sifir_Sayilar[S]=Sayilar[i];
            S++;
        }
    }


    printf("\n***Pozitif Sayilar***");

    for(i=0;i<P;i++)
    {
        printf("\n%d",Pozitif_Sayilar[i]);
    }

    printf("\n***Negatif Sayilar***");

    for(i=0;i<N;i++)
    {
    printf("\n%d",Negatif_Sayilar[i]);

    }
    printf("\n***Sifir Sayilar***");

    for(i=0;i<S;i++)
    {
        printf("\n%d",Sifir_Sayilar[i]);
    }


    return 0;
}
