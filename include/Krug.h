#ifndef KRUG_H
#define KRUG_H

#define PI 3.14

class Krug
{
    public:
        Krug();
        Krug(float r);
        Krug( const Krug &krug);
        virtual ~Krug();

        void setPoluprecnik(float r);
        float getPoluprecnik() const;
        float obimKruga(float r);
        float povrsinaKruga(float r);

    protected:

    private:
        float r;
        float* kopiranje;
};

#endif // KRUG_H
