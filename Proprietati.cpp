#include "Proprietati.h"
#include <iostream>
#include <string.h>

using namespace std;

/*Proprietate::Proprietate()
{
    descriere = NULL;
    strcpy(id,"00_00000");
    valoare=0.0;
}*/

Proprietate::Proprietate(char* d, char aidi[], double val):valoare(val)
{/*
    cout<<"INTRU IN FCT"<<endl;
    if(descriere!=NULL) {delete [] descriere; descriere=NULL;}*/
    if(d!=NULL) descriere=new char[strlen(d)+1];
        else descriere=NULL;
    strcpy(descriere,d);
    strcpy(id,aidi);
    /*valoare=val;*/
}

Proprietate::Proprietate(const Proprietate & x): valoare(x.valoare)
{
    if(x.descriere!=NULL) delete [] descriere;
    descriere=new char[strlen(x.descriere)+1];
    strcpy(descriere, x.descriere);
    strcpy(id,x.id);
    /*valoare=x.valoare;*/
}

Proprietate::~Proprietate()
{
    delete [] descriere;
    descriere=NULL;
}

void Proprietate::afisare() const
{
    if(descriere!=NULL) cout<<"descriere:"<<descriere;
        else cout<<"descriere: NULL";
    cout<<" id:"<<id;
    cout<<" valoare:"<<valoare;
    cout<<endl;
}

void Proprietate::copie(const Proprietate &x)
{

    if(x.descriere!=NULL) {descriere=new char[strlen(x.descriere)+1];
     strcpy(descriere, x.descriere);
    }
        else descriere=NULL;


    strcpy(id,x.id);
    valoare=x.valoare;
}

double Proprietate::getValoare() const
{
    return valoare;
}

bool Proprietate::judet_bun(char judet[])
{
    if(id[0]==judet[0])
        if(id[1]==judet[1])
            return 1;
        else return 0;
    else return 0;

    /*if(strcmp(id[0],judet[0]))
        if(strcmp(id[1],judet[1]))
            return 1;
        else return 0;
    else return 0;*/
}

int nr_prop(Proprietate vec[], int nr, char judet[])
{
    /*if(strlen(judet)!=2) {cout<<"Nu ati introdus un judet valid..."; return 0;}*/
    int numarul=0;
    for(int i=0; i<nr; i++)
    {
        if(vec[i].judet_bun(judet)) numarul++;
    }

    return numarul;
}

Proprietate prop_scumpa(Proprietate vec[], int nr)
{
    double maximum=0.0;
    Proprietate obj_max;
    for(int i=0; i<nr; i++)
        if(vec[i].getValoare()>maximum)
    {
        maximum=vec[i].getValoare();
        obj_max.copie(vec[i]);
    }
    return obj_max;
}
