#include "Box.h"

Box::Box() : m_animal(nullptr) {}

Box::~Box() {
	delete m_animal;
}

void Box::place(Animal* animal) {
	delete m_animal;
	m_animal = animal;
}

const Animal* Box::animal() const {
	return m_animal;
}