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


    return 0;
}
