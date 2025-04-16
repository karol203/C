#include <stdio.h>
#include <stdlib.h>
void wyczysc(char* napis){
    napis[0]=0;
}
int dlugosc(char* napis){
    int i;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}
int porownaj(char* napis1, char* napis2)
{
    int i;
    int dl1=dlugosc(napis1);
    int dl2=dlugosc(napis2);
    if(dl1==dl2)
    {
        for(i=0; i<=dl2; i++)
        {
            if(napis1[i]!=napis2[i])
            {
                return 0;
            }
        }
                return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    /*
    for(int i=0; i<=127; i++)
    {
        printf("%d %c \n",i,i);
    }

    /// ZADANIE 5.2.1
    char *napis="pieczewo";
    printf(napis);
    wyczysc(napis);
    printf(napis);

    /// ZADANIE 5.2.2
    printf("%d\n",dlugosc("Pracownia programowania to bardzo przyjemny przedmiot"));
    */
    /// ZADANIE 5.2.3
    printf("%d\n",porownaj("Pierwszy napis", "Pierwszy napis"));
}
