#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Kilavyden girilen bir metni tersten yazdirma!\n");

    int i,n;


    printf("Kac karakterlik metin gireceksiniz: ");
    scanf("%d",&n);

    char Harf,Yeni_Harf,Metin[n];



    fflush(stdin);

    printf("\nMetin giriniz : ");

    fgets(Metin,n+1,stdin);

    fflush(stdin);

    printf("\Degistirmek istediginiz karakteri giriniz : ");

    Harf=getchar();

    fflush(stdin);

    printf("\Yeni karakteri giriniz : ");

    Yeni_Harf=getchar();

    printf("\nMetnin Orjinal Hali : %s",Metin);

    for(i=0;i<n;i++)
    {
        if(Harf==Metin[i])
        {
            Metin[i]=Yeni_Harf;
        }
    }

    printf("\nMetnin Yeni Hali : %s",Metin);


    return 0;
}
