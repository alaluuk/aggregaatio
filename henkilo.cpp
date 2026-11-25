#include "henkilo.h"

string Henkilo::getEnimi() const
{
    return enimi;
}

void Henkilo::setEnimi(const string &newEnimi)
{
    enimi = newEnimi;
}

string Henkilo::getSnimi() const
{
    return snimi;
}

void Henkilo::setSnimi(const string &newSnimi)
{
    snimi = newSnimi;
}

void Henkilo::tulostaHenkilonTiedot()
{
    cout<<enimi<<" "<<snimi<<endl;
}

Henkilo::~Henkilo()
{
    cout<<"Henkilo: "<<enimi<<snimi<<" tuhottiin"<<endl;
}

Henkilo::Henkilo() {}

Henkilo::Henkilo(const string &e, const string &s):enimi(e), snimi(s)
{

}
