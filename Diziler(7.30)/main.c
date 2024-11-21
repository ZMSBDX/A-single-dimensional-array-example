#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Kardesler Kitap Okuyorlar
int main()
{
    printf("Kilavyeden girilen bir metni teklik ciftlik e gore sifreleyen program!\n");

    int i,n;
    char Gecici;

    char Metin[200];

    printf("Bir Metin giriniz : ");

    fgets(Metin,200,stdin);

    n=strlen(Metin)-1;

    char Sifre[n+1];


    if(n%2==0)
    {
        for(i=0;i<n;)
        {
            Gecici=Metin[i];
            Sifre[i]=Metin[i+1];
            Sifre[i+1]=Gecici;
            i+=2;
        }
    }
    else
    {

         for(i=0;i<n-1;)
        {
            Gecici=Metin[i];
            Sifre[i]=Metin[i+1];
            Sifre[i+1]=Gecici;
            i+=2;
        }


        Sifre[i+1]=Metin[i];
        Sifre[i]=' ';

    }

    printf("\nSifreli Hali : ");
    for(i=0;i<n+1;i++)
    {
        printf("%c",Sifre[i]);
    }



    return 0;
}
