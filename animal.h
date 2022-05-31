#ifndef ANIMAL
#define ANIMAL
#include <iostream>

using namespace std;

class animal {
private:
    static int IDcount;
public:
    animal() {};
    animal(string n, int v);  // creates an animal with name n and body volume v.
    string name;              // the animal's name
    
    int animalID;             // the animal's unique ID
    int volume;               // the volume of the animal's body

    int get_animalID();

    string get_name();
    void set_name(string n);

    int get_volume();
    void set_volume(int v);
    //virtual void get_name() = 0;

};
#endif