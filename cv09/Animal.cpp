#include <iostream>
#include <cstring>
#include "Animal.h"

Animal::Animal(const char* name) {
    this->name = new char[std::strlen(name) + 1];
    std::strcpy(this->name, name);
}

Animal::Animal(const Animal& other) {
    this->name = new char[std::strlen(other.name) + 1];
    std::strcpy(this->name, other.name);
}

Animal::~Animal() {
    delete[] name;
}

Dog::Dog(const char* name) : Animal(name){}

void Dog::make_sound() {
    std::cout << "Dog: Woof woof!\n";
}

Cat::Cat(const char* name) : Animal(name){}

void Cat::make_sound() {
    std::cout << "Cat: Meow!\n";
}