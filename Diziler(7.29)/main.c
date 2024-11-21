#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Kilavyeden girilen bir kelimenin ortadan 2 bolup tersten yazdiran program!\n");

    int i,n;


    char Kelime[100];


    printf("Kelime giriniz : ");
    fgets(Kelime,100,stdin);

    n=strlen(Kelime);



    for(i=n/2-1;0<=i;i--)
    {


            printf("%c",Kelime[i]);

    }

    for(i=n-2;i>=n/2;i--)
    {
        printf("%c",Kelime[i]);
    }



    return 0;
}
