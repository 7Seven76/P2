//
// Created by Ryank on 2/25/2025.
//

#ifndef PET_H
#define PET_H
#include <string>

using namespace std;

class Pet {
public:
    Pet();
    Pet(string name, int ID, int days_in_shelter, string color, string Animal_Type);

    string getName() const;
    int getID() const;
    int getDays_in_shelter() const;
    string getColor() const;
    string getAnimal_Type() const;

    virtual void getInfo();

    void setName(string name);
    void setID(int ID);
    void setDays_in_shelter(int days);
    void setColor(string color);
    void setAnimal_Type(string Animal_Type);

private:
    string name;
    int ID;
    int days_in_shelter;
    string color;
    string Animal_Type;
};



#endif //PET_H
