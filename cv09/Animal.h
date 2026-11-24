#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
private:
    char* name;

public:
    Animal(const char* name);

    Animal(const Animal& other);

    virtual ~Animal();
    virtual void make_sound() = 0;

    const char* get_name();
};

class Dog : public Animal {
public:
    Dog(const char* name);

    void make_sound() override;
};

class Cat : public Animal {
public:
    Cat(const char* name);

    void make_sound() override;
};

#endif
