#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Kilavyden girilen bir metni Tum harflerini buyuk harfe cevirip sonra onlari 10-35 arasi sifreleyen program!\n");

    int i,n;




    printf("Kac karakterlik metin gireceksiniz: ");
    scanf("%d",&n);

    char Metin[n];
    int Sifre[n];

    fflush(stdin);

    printf("\nMetin giriniz : ");

    fgets(Metin,n+1,stdin);

    printf("\nMetnin Orjinal Hali : %s",Metin);

    for(i=0;i<n;i++)
    {
        if(Metin[i]>=97&&Metin[i]<=122)
        {

            Metin[i]=Metin[i] - 32;
        }

    }

    printf("\nMetnin Buyuk Hali : %s",Metin);


    for(i=0;i<n;i++)
    {
        if(Metin[i]!=32)
        {
            Sifre[i]=Metin[i]-55;
        }

    }

    printf("\nMetnin Buyuk Hali : ");

    for(i=0;i<n;i++)
    {
        printf("%d",Sifre[i]);
    }

    return 0;
}
