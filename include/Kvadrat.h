#ifndef KVADRAT_H
#define KVADRAT_H
#include "Krug.h"
#include <iostream>
using namespace std;
class Kvadrat
{
    public:
        Kvadrat();
        Kvadrat(float stranica);
        Kvadrat( const Kvadrat &kvadrat);
        virtual ~Kvadrat();


        void setStranica(float stranica);
        float getStranica() const;
        float obimKvadrata(float stranica);
        float povrsinaKvadrata(float stranica);
        string gdeSeKrugNalazi(float r);

    protected:

    private:
        float stranica;
        float* kopiranje;

};

#endif // KVADRAT_H
