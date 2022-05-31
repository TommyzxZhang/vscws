#include "animal.h"

int animal::IDcount = 0;

animal::animal(string n, int v){
    name = n;
    volume = v;
    animalID = IDcount;
    IDcount++;
}

int animal::get_animalID() {
    return animalID;
}
int animal::get_volume() {
    return volume;
}
void animal::set_volume(int v) {
    volume = v;
}

