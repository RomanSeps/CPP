#ifndef VEKTOR_H
#define VEKTOR_H

#include <iostream>

class Vektor {
private:
	std::size_t m_size;
	double* m_data;

public:
	Vektor(std::size_t size, double initialValue = 0.0);
	~Vektor();

	void print();

	std::size_t size() const;
	double& operator[](std::size_t i);
	Vektor& operator+=(const Vektor& other);
	Vektor& operator*=(double k);
	bool operator==(const Vektor& other) const;
};

#endif // !VEKTOR_H
