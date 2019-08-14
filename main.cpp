#include <iostream>
#include <iomanip>
#include <math.h>
#include "Krug.h"
#include "Kvadrat.h"
using namespace std;

int main()
{

    Kvadrat kvadrat;
    Krug krug;

    krug.setPoluprecnik(5);
    kvadrat.setStranica(8);

    cout << "Poluprecnik kruga je: "<< setprecision(8)<< krug.getPoluprecnik() << endl;
    cout << "Obim kruga je: " << krug.obimKruga(krug.getPoluprecnik()) << endl;
    cout << "Povrsina kruga je: "<< krug.povrsinaKruga(krug.getPoluprecnik()) << endl << endl;



    cout << "Stranica kvadrata je: " << kvadrat.getStranica() << endl;
    cout << "Obim kvadrata je: " << kvadrat.obimKvadrata(kvadrat.getStranica()) << endl;
    cout << "Povrsina kvadrata je: " << kvadrat.povrsinaKvadrata(kvadrat.getStranica()) << endl;

    cout << "Gde se objekti nalaze? " << kvadrat.gdeSeKrugNalazi(krug.getPoluprecnik()) << endl;

    krug.setPoluprecnik(4);

    cout << "Poluprecnik kruga je: "<< setprecision(8)<< krug.getPoluprecnik() << endl;

    cout << "Gde se objekti nalaze? " << kvadrat.gdeSeKrugNalazi(krug.getPoluprecnik()) << endl;

    krug.setPoluprecnik(10);

    cout << "Gde se objekti nalaze? " << kvadrat.gdeSeKrugNalazi(krug.getPoluprecnik()) << endl;

    return 0;
}
