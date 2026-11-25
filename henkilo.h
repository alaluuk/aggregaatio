#ifndef HENKILO_H
#define HENKILO_H
#include <iostream>

using namespace std;
class Henkilo
{
private:
    string enimi;
    string snimi;
public:
    Henkilo();
    Henkilo(const string &e, const string &s);
    string getEnimi() const;
    void setEnimi(const string &newEnimi);
    string getSnimi() const;
    void setSnimi(const string &newSnimi);
    void tulostaHenkilonTiedot();

    ~Henkilo();
};

#endif // HENKILO_H
