#ifndef AIRCRAFT
#define AIRCRAFT
#include "person.h"

using namespace std;

class aircraft {
public:
    string cs;
    person Pilot;
    person CoPilot;
    aircraft(string callsign, person thePilot, person theCoPilot);
    void setPilot(person thePilot);      
    person getPilot ();
    void setCoPilot(person theCoPilot);  
    person getCoPilot ();
    void printDetails ();              
                                       
};
#endif