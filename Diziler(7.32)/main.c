#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Klavyeden girilen bir metnin kac kelimeden olsutugunu bulma!\n");


    printf("Metin Giriniz : ");

    char Metin[200];
    int i,n=0,Kelime_Sayisi=1;

    fgets(Metin,200,stdin);

     n=strlen(Metin)-1;

    for(i=0;i<n;i++)
    {
        if(Metin[i]==' '||Metin[i]==','||Metin[i]==':'||Metin[i]==';'||Metin[i]=='-')
        {
            Kelime_Sayisi++;
        }

    }

    printf("Metinin Kelime sayisi : %d",Kelime_Sayisi);

    return 0;
}
