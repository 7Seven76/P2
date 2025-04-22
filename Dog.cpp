//
// Created by Ryank on 4/17/2025.
//

#include "Dog.h"
#include "Dog.h"

// Constructor
Dog::Dog(){}

// Getters
string Dog::getBreed() {
    return Breed;
}

string Dog::getHairLength() {
    return Hair_Length;
}

// Setters
void Dog::setBreed(const string Breed) {
    this->Breed = Breed;
}

void Dog::setHairLength(string Hair_Length) {
    this->Hair_Length = Hair_Length;
}