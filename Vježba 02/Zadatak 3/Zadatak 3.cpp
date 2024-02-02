#include<iostream>
#include"Zadatak 3.h"

int main() {
	Vector vector;
	int n;

	vector.vector_new(5);

	std::cout << "Unesite element ili unesite 0 za prekid." << std::endl;
	std::cin >> n;

	while (n != 0) {
		vector.vector_push_back(n);
		std::cout << "Unesite element ili unesite 0 za prekid." << std::endl;
		std::cin >> n;
	}

	for (int i = 0; i < vector.vector_size(); i++) {
		std::cout << vector.a[i] << " ";
	}

	std::cout << std::endl;

	std::cout << "Prvi elemnt vektora je: " << vector.vector_front() << std::endl;
	std::cout << "Zadnji elemnt vektora je: " << vector.vector_back() << std::endl;

	std::cout << "Fizicka velicina vektora je: " << vector.vector_size() << std::endl;
	std::cout << "Logicka velicina vektora je: " << vector.sizeL << std::endl;

	std::cout << "Brisanje zadnjeg elementa: " << std::endl;
	vector.vector_pop_back();
	for (int i = 0; i < vector.vector_size(); i++) {
		std::cout << vector.a[i] << " ";
	}

	std::cout << std::endl;

	std::cout << "Brisanje vektora: " << std::endl;
	vector.vector_delete();
	for (int i = 0; i < vector.vector_size(); i++) {
		std::cout << vector.a[i] << " ";
	}

	std::cout << std::endl;
}