#ifndef RECORDSTOR
#define RECORDSTOR
#include <string>
#include <iostream>
#include "Amoeba.h"
using namespace std;

class RecordStore {
public:
	static void sort(Amoeba** store, int n);
};
#endif