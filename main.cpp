#include "Proprietati.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /*Proprietate m[4];=default; //constructor fara param
    Proprietate m1("casa_5cam","_B_23ABC", 300000.0); //constr cu param
    Proprietate m2(m1);//constr de copiere
    Proprietate m3;
    m.afisare();
    cout<<endl;
    m3.copie(m1);
    m1.afisare();
    cout<<endl;
    m2.afisare();
    cout<<endl;
    m3.afisare();
    m2.~Proprietate();
    cout<<endl;
    m1.afisare();
    cout<<endl;
    cout<<m1.getValoare()<<endl;*/
    Proprietate m1("casa_5cam","AG_23ABC", 20000.0);
    Proprietate m2("apartament_2cam_periferie","IF_19CDF", 440000000.0);
    Proprietate m3("garsoniera_0cam_poli","_B_23ABC", 300000.0);
    Proprietate m4("casa_5cam_balcon","IF_23ABC", 10.0);
    Proprietate* m;
    m=new Proprietate[4];
    m[1].copie(m1);
    m[2].copie(m2);
    m[3].copie(m3);
    m[4].copie(m4);
    m[1].afisare();
    cout<<endl;
    m[2].afisare();
    cout<<endl;
    m[3].afisare();
    cout<<endl;
    m[4].afisare();
    cout<<endl;
    cout<<"Introduceti un judet:";
    char judet[3];
    cin>>judet;
    cout<<nr_prop(m,4,judet)<<endl;
    prop_scumpa(m,4).afisare();

    return 0;
}
