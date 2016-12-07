#include <iostream>
using namespace std;

int main() {

    if (true) cout << "This is always displayed !" << endl;
    if (false) {
        return 1;
    }
    int score = 1000;
    if (score) {
        cout << "compared with int results in True ! " << endl;
    }
    if (score >=250) {
        cout << "250 - not bad ! " << endl;
    }
    if (score >=500) {
        cout << "500 - good ! " << endl;
    }
    if (score = 1000) {
        cout << "THis is badly composed if statement!!! score = " << score << endl;
    }
    return 0;
}