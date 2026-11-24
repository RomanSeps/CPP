#ifndef BOX_H
#define BOX_H

#include "Animal.h"

class Box {
private:
	Animal* m_animal;
public:
	Box();
	~Box();

	void place(Animal* animal);
	const Animal* animal() const;
};


#endif
