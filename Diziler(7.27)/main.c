#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Buyuk Harfler ile girilern bir kelimenin harflerinin alfabetik sirasi kadar yanina * koyan program!\n");

    int i,n,j;




    printf("Kac karakterlik metin gireceksiniz: ");
    scanf("%d",&n);

    char Kelime[n];


    fflush(stdin);

    printf("\nMetin giriniz : ");

    fgets(Kelime,n+1,stdin);

    printf("\nMetnin Orjinal Hali : %s",Kelime);

    for(j=0;j<n;j++)
    {
        printf("\n%c -> ",Kelime[j]);

        for(i=0;i<Kelime[j]-64;i++)
        {
            printf("*");
        }
    }

    return 0;
}
