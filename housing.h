#ifndef HOUSING_HPP
#define HOUSING_HPP

#include <vector>
#include <string>

class Housing {
    private:
        int Area;
        std::string Owner;
        char *City;
        std::vector<short> agesOfInhabitants;
          
    public:
        Housing() = default;
        Housing(int area, std::string owner, char *city);
        Housing(const Housing&); // copy constructor (not used)
        ~Housing() = default;
        virtual std::string Summary();
        void SetAgesOfInhabitants(const std::vector<short> &listOfAges);
        std::vector<short> GetAgesOfInhabitants();
        void showAges();
};

class Appartment : public Housing {
    private:
        int FloorNumber;
    
    public:
        Appartment();
        Appartment(int area, std::string owner, char *city, int floorNumber);
        ~Appartment() = default;
        std::string Summary();
};

class Villa : public Housing {
    private:
        int AreaGarden;

    public:
        Villa();
        Villa(int area, std::string owner, char *city, int areaGarden);
        ~Villa() = default;
        std::string Summary();
};

#endif /* HOUSING_HPP */
