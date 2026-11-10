#include <iostream>
#include "Vektor.h"

int main() {
	Vektor a(5, 1);
	Vektor b(3, 2);
	Vektor c(3, 1);


	a[1] = 4.0;

	a.print();

	std::cout << "Velikost vektoru b je " << b.size() << std::endl;

	b.print();

	c += b;

	c.print();

	return 0;
}
