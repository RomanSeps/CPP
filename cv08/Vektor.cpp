#include "Vektor.h"
#include <stdio.h>
#include <iostream>


Vektor::Vektor(std::size_t size, double initialValue) : m_size(size), m_data(new double[size]) {
	for (std::size_t i = 0; i < size; i++) {
		m_data[i] = initialValue;
	}
	std::cout << "Vytvoren vektor o velikosti " << m_size << std::endl;

}

Vektor::~Vektor() {
	delete[] m_data;

	std::cout << "Smazan vektor o velikosti " << m_size << std::endl;
}

void Vektor::print() {
	for (std::size_t i = 0; i < m_size; i++) {
		std::cout << m_data[i] << " ";
	}
	std::cout << std::endl;
}

std::size_t Vektor::size() const {
	return m_size;
}

double& Vektor::operator[](std::size_t i) {
	if (i >= m_size) {
		throw std::out_of_range("Index out of range.");
	}
	return m_data[i];
}

Vektor& Vektor::operator+=(const Vektor& other) {
	if (m_size != other.m_size) {
		throw std::invalid_argument("Incompatible sizes.");
	}

	for (std::size_t i = 0; i < m_size; i++) {
		m_data[i] += other.m_data[i];
	}
}

Vektor& Vektor::operator*=(double k) {
	for (std::size_t i = 0; i < m_size; i++) {
		m_data[i] *= k;
	}

	return *this;
}

bool Vektor::operator==(const Vektor& other) const {
	if (m_size != other.m_size) {
		return false;
	}

	for (std::size_t i = 0; i < m_size; i++) {
		if (m_data[i] != other.m_data[i]) {
			return false;
		}
	}

	return true;
}

