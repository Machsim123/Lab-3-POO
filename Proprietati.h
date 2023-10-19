#include <iostream>
#include <string.h>

class Proprietate {
// atributele sunt implicit private
 char *descriere=NULL; //ap_2cam_decom_central, in loc de spatiu se pune _
 char id[9]="00_00000"; // IL_45895 – primele 2 caractere din id se refera la
//judetul unde se gaseste proprietatea, daca se afla in Bucuresti -> _B
 double valoare=0.0;
public:
 // constr. fara param;
 // util pentru a crea obiecte intializate cu valori default
 // necesar pt. alocarea spatiului pentru elem. din vect. de proprietati
 // descriere = NULL; id este de ex: "00_00000"; valoare = 0.0
 Proprietate()=default;
 // constr. cu param; pentru a initializa cu valori dorite toate atrib.
 Proprietate(char*, char[], double);
 // constructor de copiere - se apeleaza automat la transmiterea
 // parametrilor in functii prin valoare si la
 // returnarea obiectelor din fctii prin valoare;
 // puneti: cout<<"const de copiere"; (ca sa vedeti unde e apelat)
 Proprietate(const Proprietate&);
 // elibereaza spatiu ocupat de un obiect
 ~Proprietate();
 //afiseaza toate atributele unui obiect de acest tip
 void afisare() const;
 // face o copie profunda a parametrului si o stocheaza in
 // obiectul cu care se face apelul;
 void copie(const Proprietate &);
 double getValoare() const;
 bool judet_bun(char []);
};

int nr_prop(Proprietate [], int , char []);
Proprietate prop_scumpa(Proprietate [], int );
