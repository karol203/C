#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    double a,b,c;
};
struct punkt
{
    double x,y,z;
};
struct zespolone{
double a;
double b;
};
double obwod(struct trojkat t)
{
    return t.a+t.b+t.c;
}
void zamiana(struct trojkat t1, struct trojkat *t2)
{
    *t2=t1;
}
double minimum(struct punkt tab[], int n)
{
    int i,j;
    double pom;
    double min=sqrt(pow(tab[1].x-tab[0].x,2)+pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z,2));

    for (i=0;i<n,i++)
    {
        for(j=i+1;j<n;j++)
        {
            double pom=sqrt(pow(tab[1].x-tab[0].x,2)+pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z,2));
        if(pom<min)
        {
            min=pom;
        }
        }
    }
    return min;
}
void wyswietl_liczbe_zespolona(struct zespolone liczba)
{
    printf("%f+%f i \n",liczba.a,liczba.b);
}
void wczytaj(struct zespolone liczba)
{
    scanf("%lf", &liczba.a);
    scanf("%lf", &liczba.b);
}
double modul_liczby_zespolonej(struct zespolone liczba)
{
    return sqrt(pow(liczba.a,2)+pow(liczba.b,2));
}
struct zespolone dodaj(struct zespolone liczba1, struct zespolone liczba2)
{
    struct zespolone suma;
    suma.a=liczba1.a+liczba2.a;
    suma.b=liczba1.b+liczba2.b;
    return suma;
};
struct element *utworz()
{
return NULL
};
void wyczysc(struct element* lista)
{
    struct element *wsk=lista;
    while(lista!=NULL)
    {
        lista=lista->next;
        free(wsk);
        wsk=lista;
    }
}
void element *dodajnapoczatek(struct element* lista,int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->lista;
    return wsk;
}
void element *dodajnakoniec(struct element* lista,int a)
{
    struct element *wsk;
    if(lista==NULL)
    {
        lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=lista;
        while(wsk->next!=NULL)
    }
}
void wypisz(struct element * lista)
{
    while(lista!=NULL)
    {
        printf("%d\n",lista->i);
        lista=lista->next;

    }
}
int main()
{
    ///zadanie1
    //struct trojkat t1;
    //t1.a=3;
    //t1.b=4;
    //t1.c=4;
    //printf("Obwod: %f\n",obwod(t1));
    //printf("%d\n",sizeof(double));

    ///zadanie2
    /*
    struct trojkat t1;
    t1.a=3;
    t1.b=3;
    t1.c=3;
    struct trojkat t2;
    t2.a=4;
    t2.b=4;
    t2.c=4;
    struct trojkat *wks2=&t2;
    printf("%f %f %f\n",t1.a,t1.b,t1.c);
    printf("%f %f %f\n",t2.a,t2.b,t2.c);
    void zamiana(t1,t2);
    printf("%f %f %f\n",t1.a,t1.b,t1.c);

    ///zadanie3
    struct punkt P;
    P.x=4;
    P.y=7;
    P.z=1;
    struct punkt Q;
    Q.x=2;
    Q.y=2;
    Q.z=8;
    struct punkt R;
    R.x=5;
    R.y=6;
    R.z=0;
    struct punkt tab[2] = (P,Q,R);
    printf("%f",minimum(tab,3));
    */
    ///
}
