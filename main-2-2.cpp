#include "aircraft.h"
//#include "person.h"
#include "string"


using namespace std;

int main() {
	person fuck("fuck", 100);
	person ffuck("fffuck", 100);
	aircraft ffffuck("fuckk", fuck, ffuck);
	cout << ffffuck.getPilot().getName() << endl;
	cout << ffffuck.getCoPilot().getName() << endl;
}