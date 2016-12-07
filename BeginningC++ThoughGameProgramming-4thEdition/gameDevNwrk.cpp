//
// Created by Iidwuurliik on 12/7/2016.
//

#include <iostream>
#include <string>

using namespace std;


int main() {
    string username, password;
    bool loginSuccess;

    do {
        cout << "\n Username : " << endl;
        cin >> username;
        cout << "\n Password  : " << endl;
        cin >> password;

        if (username == "ysimony" && password == "123456") {
            cout << "\n Hey Yana!";
            loginSuccess = true;
        }
        else if (username == "smiroshnikov" && password == "654321") {
            cout << "\n Hey Sergei!";
            loginSuccess = true;
        }
        else if (username == "guest" ||  password == "guest") {
            cout << "\n Welcome Guest !";
            loginSuccess = true;
        }
        else {
            cout << "FU access denied!" << endl;
            loginSuccess = false;
        }

    }while (!loginSuccess);

    return 0;
}