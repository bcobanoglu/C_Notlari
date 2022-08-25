#include <iostream>
#include <string>
using namespace std;

class benim_Exception {
    public:
    benim_Exception(const string msg) {
        cerr << "Hatasız kul olmaz! "<< msg << endl;
    }
};

