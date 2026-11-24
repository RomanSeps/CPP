#include "Animal.h"
#include "Box.h"

int main() {
    Dog rex("Rex");
    Cat max("Max");

    const int N = 2;

    Box boxy[N];

    rex.make_sound();
    max.make_sound();
}