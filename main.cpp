#include <string>
#include <iostream>
#include <vector>
#include "housing.h"

using std::cout;
using std::endl;
using std::string;

// This is just a small program that I wrote while learning C++.
// Comments are more than welcome!

int main() {
    Housing* office;
    char townName[] = "Copenhagen";
    string owner = "Company name";
    char *townPtr = townName;
    office = new Housing(600, owner, townPtr);
    cout << office->Summary() << '\n';
    delete office;

    std::vector<short> ages = {110, 90, 84};

    Housing* appartment;
    char cityName[] = "KBH SV";
    appartment = new Appartment(60, "Last name", cityName, 1);
    appartment->SetAgesOfInhabitants(ages);
    appartment->showAges();

    cout << appartment->Summary() << endl;
    delete appartment;
}
