//
// Created by Iidwuurliik on 11/28/2016.
//

class Human {
public:
    string name;
    int age;
    int life_force;
};

class Builder : public Human {

public:
    void build() {
        life_force -= 10;
        cout << "Tuk tuk tuk";
    };

public:
    void information() {
        cout << "My name is " << name << ".I am " << age << endl;
    }
};

class Warrior : public Human {

public:
    void sword_swing() {
        cout << "whoosh" << endl;
    }

public:
    void warcry() {
        cout << "Fas Ro Dah!! " << endl;
    }
};