#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
void zad1d(unsigned int n, int* tab){
    int i;
    for(i=0; i<n; i++)
    {
        if(tab[i]>0)
        {
            tab[i];
        }
        else
        {
            tab[i] = tab[i] * -1;
        }
    }
    wypisz(n, tab);
}
float zad2a(unsigned int n,int* tab){
    int i;
    int suma = 0;
    for(i=0; i<n; i++)
    {
        suma = suma + tab[i];
    }
    float srednia = suma / n;
    return srednia;
}
int zad2b(unsigned int n, int* tab){
    int i;
    int suma = 0;
    for(i=0; i<n; i++)
    {
        suma = suma + tab[i];
    }
    return suma;
}
int zad2c(unsigned int n,int* tab){
    int i;
    int suma = 0;
    for(i=0; i<n; i++)
    {
        suma = suma + tab[i] * tab[i];
    }
    return suma;
}
int zad3(unsigned const int n,const int* tab){
    int i;
    int suma = 0;
    for(i=0; i<n; i++)
    {
        suma = suma + tab[i];
    }
    int srednia = suma / n;
    return srednia;
}
float zad4(unsigned int n, unsigned int* tab){
    int i;
    int iloczyn = 1;
    for(i=0; i<n; i++)
    {
        iloczyn = iloczyn * tab[i];
    }
    return pow(iloczyn,1.0/n);
}
void zad6a(unsigned int n, int* tab1, int* tab2){
    int i;
    for(i=0; i<n; i++)
    {
        tab2[i] = tab1[i];
    }
    wypisz(n, tab2);
}
void zad6b(unsigned int n, int* tab1, int* tab2){
    int i;
    for(i=0; i<n; i++)
    {
        tab2[n-1-i]=tab1[i];
    }
    wypisz(n, tab2);
}
void zad7a(unsigned int n, int* tab1, int* tab2, int* tab3){
    int i;
    for(i=0; i<n; i++)
    {
        tab3[i] = tab1[i] + tab2[i];
    }
    wypisz(n, tab3);
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

    /// ZADANIE 4.2.1C
    int tab[]={4,5,13,51};
    zad1c(4,tab);

    /// ZADANIE 4.2.1D
    int n = 4;
    int tab[]={6,-8,16,-55};
    zad1d(n, tab);

    /// ZADANIE 4.2.2A
    int n = 4;
    int tab[]={5,5,4,4};
    printf("%lf", zad2a(n, tab));

    /// ZADANIE 4.2.2B
    int n = 4;
    int tab[] = {1,1,1,1};
    printf("Suma elementow wynosi %d", zad2b(n, tab));

    /// ZADANIE 4.2.2C
    int n = 4;
    int tab[] = {4,6,1,1};
    printf("Suma kwadratow wynosi %d", zad2c(n, tab));

    /// ZADANIE 4.2.3
    int n = 4;
    int tab[] = {4,4,5,5};
    printf("Srednia arytmetyczna wynosi %d", zad3(n, tab));

    /// ZADANIE 4.2.4
    int n = 4;
    int tab[] = {4,5,6,7};
    printf("Srednia geometryczna wynosi %f", zad4(n, tab));

    /// ZADANIE 4.2.6A
    int n = 4;
    int tab1[] = {3,4,5,6};
    int tab2[] = {1,2,3,4};
    zad6a(n, tab1, tab2);

    /// ZADANIE 4.2.6B
    int n = 4;
    int tab1[] = {3,4,5,6};
    int tab2[] = {1,2,3,4};
    zad6b(n,tab1,tab2);
    */
    /// ZADANIE 4.2.7A
    int n = 4;
    int tab1[] = {3,4,5,6};
    int tab2[] = {1,2,3,4};
    int tab3[] = {5};
    zad7a(n, tab1, tab2, tab3);
    return 0;
}

