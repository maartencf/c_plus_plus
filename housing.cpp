#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <iostream>
#include "housing.h"
using namespace std;

Housing::Housing(int area, string owner, char *city) {
    Area = area;
    Owner = owner;
    City = city;
    agesOfInhabitants = {};
}

string Housing::Summary() {
    return "Owner: " + Owner + ", City: " + City;
}

Housing::Housing(const Housing&) {}

void Housing::SetAgesOfInhabitants(const vector<short> &listOfAges)
{
    auto numberOfPeople = listOfAges.size();
    agesOfInhabitants.reserve(numberOfPeople);
    for (short i = 0; i < listOfAges.size(); i++)
    {
        agesOfInhabitants.push_back(listOfAges[i]);
    }
    // sorting the ages from low to high:
    sort(agesOfInhabitants.begin(), agesOfInhabitants.end()); 
}

vector<short> Housing::GetAgesOfInhabitants() // not called ATM
{
    if (agesOfInhabitants.size() > 0)
    {
        return agesOfInhabitants;
    }
    else
    {
        cout << "No ages of inhabitants defined." << '\n';
        return {};
    }
}

void Housing::showAges()
{
    if (agesOfInhabitants.size() > 0)
    {
        cout << "List og increasing ages of the inhabitants with name " + Owner << '\n';
        for (short i = 0; i < agesOfInhabitants.size(); i++)
        {
            cout << to_string(agesOfInhabitants[i]) << '\n';
        }
        cout << '\n';
    }
    else
    {
        cout << "No ages of inhabitants defined." << '\n';
    }
}

// Appartment

Appartment::Appartment()
    : FloorNumber { 0 }
{}

Appartment::Appartment(int area, string owner, char *city, int floorNumber)
    : Housing{area, owner, city}, FloorNumber {floorNumber}
{}

string Appartment::Summary() {
    return Housing::Summary() + ", floor number: " + std::to_string(FloorNumber);
}

// Villa

Villa::Villa()
    : AreaGarden { 0 }
{}

Villa::Villa(int area, string owner, char *city, int areaGarden)
    : Housing{area, owner, city}, AreaGarden {areaGarden}
{}

string Villa::Summary() {
    return Housing::Summary() + ", area: " + std::to_string(AreaGarden);
}
