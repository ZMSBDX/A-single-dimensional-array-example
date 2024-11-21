#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// aKdrseel riKat pkOyuroal r
int main()
{
    printf("Kilavyeden girilen bir Sifrenin teklik ciftlik e gore tekrar metne ceviren program!\n");

    int i,n;
    char Gecici;

    char Sifre[200];

    printf("Bir Sifre giriniz : ");

    fgets(Sifre,200,stdin);

    n=strlen(Sifre)-1;

    char Metin[n];


        for(i=0;i<n;)
        {
            Gecici=Sifre[i];
            Metin[i]=Sifre[i+1];
            Metin[i+1]=Gecici;
            i+=2;
        }


    printf("\nSifreli Hali : ");
    for(i=0;i<n;i++)
    {
        printf("%c",Metin[i]);
    }

    return 0;
}
