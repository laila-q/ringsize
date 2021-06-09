#include <iostream>
using namespace std;

int main() {
    
    double circ=0, diam=0,ussize=0;
    int eursize=0;
    cout << "RING SIZES\n\n";
    cout << "Enter circumference of finger (mm): ";
    cin >> circ;
    
    diam = circ / (22/7);
    
    if (diam == 14 || diam <14.6) {
        ussize = 3;
        eursize = 44;
    }
    
    else if (diam == 14.6 || diam <15.3) {
        ussize = 3.75;
        eursize = 46;
    }
    
    else if (diam == 15.3 || diam <16) {
        ussize = 4.5;
        eursize = 48;
    }
    
    else if (diam == 16 || diam <16.5) {
        ussize = 5;
        eursize = 50;
    }
    
    else if (diam == 16.5 || diam <17.2) {
        ussize = 6;
        eursize = 52;
    }
    
    else if (diam == 17.2 || diam <17.8) {
        ussize = 7;
        eursize = 54;
    }
    
    else if (diam == 17.8 || diam <18.5) {
        ussize = 7.5;
        eursize = 56;
    }
    
    else if (diam == 18.5 || diam <19) {
        ussize = 8.5;
        eursize = 58;
    }
    
    else if (diam == 19 || diam <19.8) {
        ussize = 9;
        eursize = 60;
    }
    
    else if (diam == 19.8 || diam <20.4) {
        ussize = 10;
        eursize = 62;
    }
    
    else if (diam == 20.4 || diam <22) {
        ussize = 10.5;
        eursize = 64;
    }
    
    cout << "Diameter: " << diam << endl;
    cout << "US size: " <<ussize <<endl;
    cout << "EUR size: " <<eursize <<endl;
    return 0;
}
