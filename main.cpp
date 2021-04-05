#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "housing.h"

using std::cout;
using std::endl;
using std::string;

// This is just a small program that I wrote while learning C++.
// Comments are more than welcome!

int main() {
    char townName[] = "Copenhagen";
    string owner = "Company name";
    char *townPtr = townName;
    std::unique_ptr<Housing> office = std::make_unique<Housing>(600, owner, townPtr);

    cout << office->Summary() << '\n';

    std::vector<short> ages = {110, 90, 84};

    char cityName[] = "KBH SV";
    int area = 60;
    auto appartment = std::make_unique<Appartment>(area, "Last name", cityName, 1);

    appartment->SetAgesOfInhabitants(ages);
    appartment->showAges();

    cout << appartment->Summary() << endl;
}
