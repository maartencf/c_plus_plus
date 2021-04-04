#ifndef HOUSING_HPP
#define HOUSING_HPP

using std::string;

class Housing {
    private:
        int Area;
        string Owner;
        char *City;
        std::vector<short> agesOfInhabitants;
          
    public:
        Housing() = default;
        Housing(int area, string owner, char *city);
        Housing(const Housing&); // copy constructor (not used)
        ~Housing() = default;
        virtual string Summary();
        void SetAgesOfInhabitants(const std::vector<short> &listOfAges);
        std::vector<short> GetAgesOfInhabitants();
        void showAges();
};

class Appartment : public Housing {
    private:
        int FloorNumber;
    
    public:
        Appartment();
        Appartment(int area, string owner, char *city, int floorNumber);
        ~Appartment() = default;
        string Summary() override;
};

class Villa : public Housing {
    private:
        int AreaGarden;

    public:
        Villa();
        Villa(int area, string owner, char *city, int areaGarden);
        ~Villa() = default;
        string Summary() override;
};

#endif /* HOUSING_HPP */
