#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Kilavyden girilen bir metni tersten yazdirma!\n");

    int i,n;

    printf("Kac karakterlik metin gireceksiniz: ");
    scanf("%d",&n);

    char Metin[n];



    fflush(stdin);

    printf("\nMetin giriniz : ");

    fgets(Metin,n+1,stdin);

    fflush(stdin);


    printf("\nMetin Orjinal hali : %s",Metin);

    printf("\nTersten yazilmis hali : ");
    for(i=0;i<n;i++)
    {
        printf("%c",Metin[n-i-1]);
    }

    for(i=0;i<n;i++)
    {
        if(Metin[i]>=65&&Metin[i]<=90)
        {
            Metin[i]=Metin[i] + 32;
        }
        else if(Metin[i]>=97&&Metin[i]<=122)
        {
            Metin[i]=Metin[i] - 32;
        }
        else
        {

        }


    }


    printf("\nTersten ve  Harflerin buyuk - kucuk ters donmus hali ile yazilmasi : ");
    for(i=0;i<n;i++)
    {
        printf("%c",Metin[n-i-1]);
    }

    printf("\nOrjinal metnin Harflerini buyuk - kucuk ters donmus hali ile yazilmasi : ");
    for(i=0;i<n;i++)
    {
        printf("%c",Metin[i]);
    }

    return 0;
}
