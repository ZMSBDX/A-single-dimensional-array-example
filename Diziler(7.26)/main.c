#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Metnin ortadan bir sagdan bir soldan yazdiran program!\n");

    int i,n;




    printf("Kac karakterlik metin gireceksiniz: ");
    scanf("%d",&n);

    char Metin[n];


    fflush(stdin);

    printf("\nMetin giriniz : ");

    fgets(Metin,n+1,stdin);

    printf("\nMetnin Orjinal Hali : %s",Metin);

    printf("\nMetnin Son Hali : ");


    for(i=0;i<n/2+1;i++)
    {
        if(i==0)
        {
            printf("%c",Metin[n/2]);
        }
        else
        {
        printf("%c",Metin[n/2-i]);
        printf("%c",Metin[n/2+i]);
        }


    }

    return 0;
}
