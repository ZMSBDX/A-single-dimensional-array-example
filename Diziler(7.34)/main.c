#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("Tersten ve norlma yazilisi ayni olan kelime bulma!\n");

    int ktr=1,i,n;
    char Kelime[40];

    printf("Kelime Giriniz : ");
    fgets(Kelime,40,stdin);
    n=strlen(Kelime)-1;


    for(i=0;i<n;i++)
    {
        if(Kelime[i]!=Kelime[n-i-1])
        {
            printf("kelimeinin Tersten ve normal yazimi ayni DEGILDIR");
            ktr=0;
            break;
        }

    }

    if(ktr==1)
    {
        printf("kelimeinin Tersten ve normal yazimi ayni");
    }

    return 0;
}
