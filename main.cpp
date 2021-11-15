#include "Zvejas.h"
#include <vector>
#include "Laivas.h"
#include "Motorinis.h"
int main() {

  Laivas laivas("Laivas");
  Motorinis m("Motorinis");

  m.spausdinti();
  m.judeti();


//  string a;
//
//  vector<Zvejas> zvejai;
//  Zvejas zvejas("Petras", 22);
//  Zvejas onute("Onute", 555);
//
//  onute.gautiIkaini();
//  onute.keistiVarda("waeaa");
//
//  zvejai.emplace_back(zvejas);
//  zvejai.emplace_back(onute);
//  zvejai.emplace_back(zvejas);
//  zvejai.emplace_back(onute);
//
//  for(Zvejas zv: zvejai){
//    zv.isplaukti_zvejoti(zv);
//  }



   // Kartojimas:
   // Funkcija
   // Ciklas
   // Struct ir C++ atsirado struktūros patobulinimas Class


//   Zvejas petras = sukurtiZveja("Petras", 20);
//
//   Zvejas ona;
//   ona.vardas = "Onute";
//   ona.ikainis = 55;
//
//
//  isplaukti_zvejoti(petras.vardas, petras.ikainis);
//  isplaukti_zvejoti(ona);


  return 0;
}
