#include <stdio.h>
#include <stdlib.h>
void wypisz(unsigned int n, int* tab){
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",tab[i]);

    }
    printf("\n");
}
void zero(unsigned int n, int* tab){
    int i;
    for(i=0; i<n; i++)
    {
        tab[i]=0;
    }
    wypisz(n,tab);
}
void zad1b(unsigned int n, int* tab){
    int i;
    for(i=0; i<n; i++)
    {
        tab[i]=i;
    }
    wypisz(n,tab);
}
void zad1c(unsigned int n, int* tab){
    int i;
    for(i=0; i<n; i++)
    {
        tab[i] = tab[i] * 2;
    }
    wypisz(n,tab);
}
int main()
{
    /*
    /// ZADANIE 4.2.0
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6; tab[1]=2; tab[2]=6; tab[3]=7;
    wypisz(rozmiar, tab);
    printf("%d\n",*tab);

    /// ZADANIE 4.2.1A
    zero(rozmiar, tab);

    /// ZADANIE 4.2.1B
    zad1b(rozmiar, tab);
    */
    /// ZADANIE 4.2.1C
    int tab[]={4,5,13,51};
    zad1c(4,tab);
    return 0;
}
