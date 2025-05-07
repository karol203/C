#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
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
/*
void przepiszpierwszych(char* napis1, char* napisz2, unsigned int n){
    int i;
    for(i=0; i<dlugosc(napis1)&&i<n;i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
}
*/
void wypisz(char* napis){
    printf("%s\n", napis);
}

void wytnij(char* napis1, int n, int m)
{
    char* napis2;
    for(int i = 0; i<dlugosc(napis1); i++)
    {
        if(i>n && i<m)
        {
            napis2[i]=napis1[i];
        }
    }
    printf("%s\n", napis2);
}
void sklej(char* napis1, char* napis2, char* napis3)
{
    int i,j;
    for(i=0;napis1[i]!=0;i++)
    {
        napis3[i]=napis1[i];
    }
    for(j=0;napis2[j]!=0;i++,j++)
    {
        napis3[i]=napis2[j];
    }
    napis3[i]=0;
    wypisz(napis3);
}
char* godzina(int godz,int min, int sek)
{
    char* wynik = malloc(9*sizeof(char));
    sprintf(wynik,"%02d:%02d:%02d",godz,min,sek);
    return wynik;
}
char* sklejnapisy(char* napis1,char* napis2, char* napis3)
{
    char* wynik= malloc(strlen(napis1)+strlen(napis2)+strlen(napis3)+1*sizeof(char));
    strcpy(wynik,napis1);
    strcat(wynik,napis2);
    strcat(wynik,napis3);
}
char* zamiananaduze(char* napis)
{
    int i;
    for(i=0;napis[i]!=0;i++)
    {
        napis[i]=towupper(napis[i]);
    }
}
int** alokuj(unsigned int n, unsigned int m)
{
    int **t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        t[i]=malloc(m*sizeof(int));
    }
    return t;
}
int(* alokuj2(unsigned int n,unsigned int m))[]
{
    return malloc(n*sizeof(int[m]));
}
void wypisz(int **t,unsigned int n, unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}
void wypisz2(unsigned int n, unsigned int m, int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
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

    /// ZADANIE 5.2.3
    printf("%d\n",porownaj("Pierwszy napis", "Pierwszy napis"));
    /// ZADANIE 5.2.4
    printf("%d\n",pierwszy("Arbuz", "Banan"));
    /// ZADANIE 5.2.7
    char* napis1="Ala m";
    char* napis2="a kota";
    char drugi7[20]="matematyka";
    sklej(napis1,napis2,drugi7);
    */
    /*
    /// ZADANIE 5.2.9
    char* napis = "Konstantynopolitanczykowianeczka";
    int n = 5;
    int m = 9;
    wytnij(napis, n,m);
    /// ZADANIE 5.2.14
    char* pierwszy="arbuz";
    wypisz(pierwszy);

    /// ZADANIE 5.2.20
    int godz = 7;
    int min=14;
    int sek=56;
    printf(godzina(godz,min,sek));

    ///ZADANIE 5.2.22
    char* napis1="Ala m";
    char* napis2="a kota";
    char* napis3=" matematyka";
    printf(sklejnapisy(napis1,napis2,napis3));
    */
    ///ZADANIE 5.2.26
    char* napis3="matematyka";
    zamiananaduze(napis3);
    printf("%s",napis3);
    /// ZADANIE 6.2.1
    printf("%p",alokuj(2,2));
}
