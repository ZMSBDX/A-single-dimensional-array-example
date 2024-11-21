#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Klavyeden girilen n adet noktanin a,b dairesinin icindemi ustundemi oldugunu hesaplayan program!\n");


    int i,n,Ustunde,Icinde,Disinda;

    float Daire_X,Daire_Y,Daire_R,sonuc;

    printf("Dairenin Kordinatlarini girinzi.\n");
    printf("X :");
    scanf("%f",&Daire_X);
    printf("\nY :");
    scanf("%f",&Daire_Y);
    printf("\nr :");
    scanf("%f",&Daire_R);

    printf("\nKac adet nokta gireceksiniz : ");
    scanf("%d",&n);

    float Noktalar_X[n],Noktalar_Y[n];

    for(i=0;i<n;i++)
    {
    printf("%d. noktanin kordinatlarini giriniz.",i+1);
    printf("\nX :");
    scanf("%f",&Noktalar_X[i]);
    printf("\nY :");
    scanf("%f",&Noktalar_Y[i]);
    }

    for(i=0;i<n;i++)
    {
        sonuc=(pow((Noktalar_X[i]-Daire_X),2))+(pow((Noktalar_Y[i]-Daire_Y),2));

        if(sonuc==(pow(Daire_R,2)))
        {
            Ustunde++;
        }
        else if(sonuc>(pow(Daire_R,2)))
        {
            Disinda++;
        }
        else
        {
            Icinde++;
        }

    }

     printf("\n***Daire gore noktalarin durumu***\n Dairenin ustunde : %d\nDairenin Disinda : %d\nDairenin Icinde : %d",Ustunde,Disinda,Icinde);




    return 0;
}
