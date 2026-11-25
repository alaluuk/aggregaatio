#ifndef YRITYS_H
#define YRITYS_H
#include <iostream>
#include <memory>
#include <vector>
#include "henkilo.h"

using namespace std;

class Yritys
{
    string nimi;
    vector<shared_ptr<Henkilo>> tyontekijat;
public:
    Yritys(const string &n);
    void lisaaHenkilo(shared_ptr<Henkilo>);
    void tulostaHenkilosto();

};

#endif // YRITYS_H
