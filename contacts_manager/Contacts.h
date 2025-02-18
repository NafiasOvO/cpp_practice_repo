#ifndef CONTACTS_H
#define CONTACTS_H

#include <string>
#include <iostream>
#include <map>

using namespace std;

class Contacts
{
private:
    string name;
    string tel_no;
    // string addr;

    map<string, string> contact;

public:
    Contacts(/* args */);
    Contacts(string, string);
    ~Contacts();

    // void print
};

Contacts::Contacts(string n, string t)
{
    this->name = n;
    this->tel_no = t;
}
// Contacts::Contacts(string n, string t, string a)
// {
//     this->name = n;
//     this->tel_no = t;
//     this->addr = a;
// }

Contacts::~Contacts()
{
}

#endif