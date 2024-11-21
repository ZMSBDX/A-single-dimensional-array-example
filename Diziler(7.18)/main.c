#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Kilavyeden girilen metnin icinde girilen harften  kaca tane oldununu bulan ve nerelerde oldunu yazan program!\n");

    int i,n,Kac_Tane;

    printf("Kac karakterlik metin gireceksiniz: ");
    scanf("%d",&n);

    char Metin[n],Harf;

    int Yer[n];

    fflush(stdin);

    printf("\nMetin giriniz : ");

    fgets(Metin,n+1,stdin);

    fflush(stdin);

    printf("\nBir harf giriniz : ");
    scanf("%c",&Harf);

    for(i=0;i<n;i++)
    {
        if(Harf==Metin[i])
        {
            Kac_Tane++;

            Yer[Kac_Tane-1]=i+1;
        }
    }

    printf("%c den %d kadar vardir ve Konumlarida : \n ",Harf,Kac_Tane);
    for(i=0;i<Kac_Tane;i++)
    {
        printf("\n%d",Yer[i]);
    }




    return 0;
}
