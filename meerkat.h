#ifndef MEERKAT
#define MEERKAT
#include <string>
#include <iostream>

using namespace std;

class meerkat{
public:
string name;
int age;
meerkat();
void setname(string meerName);
void setAge(int meerAge);
string getName();
int getAge();
};
#endif