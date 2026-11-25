#include "yritys.h"



Yritys::Yritys(const string &n)
{

}

void Yritys::lisaaHenkilo(shared_ptr<Henkilo> objH)
{
    tyontekijat.push_back(objH);
}

void Yritys::tulostaHenkilosto()
{
    cout<<"Yrityksen: "<<nimi<<"Henkilosto"<<endl;
    for(auto &obj: tyontekijat){
        obj->tulostaHenkilonTiedot();
    }
    cout<<"**************************"<<endl;
}
