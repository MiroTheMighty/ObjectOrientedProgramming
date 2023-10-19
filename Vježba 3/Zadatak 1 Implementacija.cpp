#include<iostream>
#include"Zadatak 1 H.h"

void UnosVektora(std::vector<int>& v, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "Unesite " << i + 1 << " element vektora: ";
		std::cin >> v[i];
	}

	std::cout << std::endl;
}

void UnosVektoraPar(std::vector<int>& v, int a, int b) {
	int n;
	std::cout << "Unesite element vektora u intervalu " << a << "-" << b << ": ";
	std::cin >> n;

	while (n >= a && n <= b) {
		v.push_back(n);
		std::cout << "Unesite element vektora u intervalu " << a << "-" << b << ": ";
		std::cin >> n;
	}

	std::cout << std::endl;
}

void IspisVektora(std::vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
}

void BrisanjeElementa(std::vector<int>& v, int n) {
	v.erase(v.begin() + n);
}