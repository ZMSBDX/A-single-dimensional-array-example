#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Klavyeden girilen girdinin turunu belirleme!\n");

    int i;

    char Metin[10];

    printf("Lutfen 10 karakterlik bir metin giriniz : ");

    fgets(Metin,11,stdin);

    for(i=0;i<10;i++)
    {
        if(Metin[i]>=0&&Metin[i]<=9||Metin[i]>=48&&Metin[i]<=57)
        {
            printf("\n (%c) bir Sayidir.",Metin[i]);
        }
        else if(Metin[i]>=65&&Metin[i]<=90||Metin[i]>=97&&Metin[i]<=122)
        {
            printf("\n (%c) bir Harf.",Metin[i]);
        }
        else
        {
            printf("\n (%c) bir Ozel Karakterdir.",Metin[i]);
        }
    }





    return 0;
}
