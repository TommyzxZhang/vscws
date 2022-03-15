#include <iostream>
using namespace std;

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){
    for (int k = 0; k < 4; k++) {
        cout << "\t" << courses[k];
    }
    cout<<endl;
    for (int i = 0; i < nstudents; i++){
        cout << students[i] << "\t";
        for (int j = 0; j < 4; j++){
            cout << report_card[i][j] << "\t";
        }
        cout << endl;

        
    }
    
    
}