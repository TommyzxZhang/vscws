#include <iostream>
using namespace std;
extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

void main(){
    string courses[4] = { "OOP", "Math1A", "Prac", "Matlab" };
    int nstudents = 3;
    string students[3] = { "wdnmd","wdndm","nmdwd" };
    int report_card[3][4] = {};
    print_class(courses, students, report_card, nstudents);
}