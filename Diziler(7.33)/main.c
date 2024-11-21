#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("Bir metinde ki a harfi iceren kelime sayisini bulma!\n");

    int j,i,n,A_Varmi=1,A_Iceren_Kelime=0;
    char Metin[200];

    printf("Metin Giriniz : ");
    fgets(Metin,200,stdin);
    n=strlen(Metin)-1;

    for(j=0;j<n;j++)
    {
        A_Varmi=0;
        for(i=j;Metin[i]!=' ';i++)
        {
            if(Metin[i]=='A'||Metin[i]=='a')
            {
                A_Varmi=1;
            }

        }

        j=i;

        if(A_Varmi==1)
        {
            A_Iceren_Kelime++;
        }

    }
    printf("A Iceren toplam %d kadar kelime vardir. ",A_Iceren_Kelime);

    return 0;
}
