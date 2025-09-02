#include "Player.h"
#include <iostream>
using namespace std;

Player::Player() : age(0) {
    strcpy_s(name, sizeof(name), "NoName");
}

Player::Player(const char* n, int a) : age(a) {
    strcpy_s(name, sizeof(name), n);
}

void Player::accept() {
    cout << "Enter player name: ";
    cin.getline(name, sizeof(name));
    cout << "Enter age: ";
    cin >> age;
}

void Player::display() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
