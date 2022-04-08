//#include "person.h"
#include "aircraft.h"
#pragma once

using namespace std;


aircraft::aircraft(string callsign, person thePilot, person theCoPilot) {
    cs = callsign;
    Pilot = thePilot;
    CoPilot = theCoPilot;
}
void aircraft::setPilot(person thePilot) {
    Pilot = thePilot;
}
person aircraft::getPilot() {
    return Pilot;
}
void aircraft::setCoPilot(person theCoPilot) {
    CoPilot = theCoPilot;
}
person aircraft::getCoPilot() {
    return CoPilot;
}
void aircraft::printDetails() {
    cout << cs << endl;
    cout << Pilot.getName() << endl;
    cout << CoPilot.getName() << endl;
}
                                     
