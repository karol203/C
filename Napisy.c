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
int pierwszy(char* napis1, char* napis2){
    int i = 0;
    while(napis1[i]!=0 || napis2[i]!=0)
    {
        if(napis1[i]<napis2[i])
            return 1;
        else if(napis1[i]<napis2[i])
            return 0;
        if(napis2[i]==0)
        {
            return 0;
        }
        i++;
    }
}
void przepisz(char* napis1, char* napis2){
    int i;
    for(i=0;i<dlugosc(napis1);i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[dlugosc(napis1)]=0;
}
void przepiszpierwszych(char* napis1, char* napisz2, unsigned int n){
    int i;
    for(i=0; i<dlugosc(napis1)&&i<n;i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
}
void wypisz(char* napis){
    printf("%s\n", napis);
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

    /// ZADANIE 5.2.3
    printf("%d\n",porownaj("Pierwszy napis", "Pierwszy napis"));
    /// ZADANIE 5.2.4
    printf("%d\n",pierwszy("Arbuz", "Banan"));
    */
    /// ZADANIE 5.2.5

    /// ZADANIE 5.2.14
    char* pierwszy="arbuz";
    wypisz(pierwszy);
}
