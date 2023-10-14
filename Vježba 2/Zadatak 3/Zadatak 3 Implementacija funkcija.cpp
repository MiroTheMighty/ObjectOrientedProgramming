#include"Zadatak 3.h"
#include<iostream>


void Vector::vector_new(int n) {
	a = new int[n];
	sizeL = n;
	sizeF = 0;
}

void Vector::vector_delete() {
	delete a;
}

void Vector::vector_push_back(int n) {
	if (sizeL == sizeF) {
		sizeL *= 2;
		int* aa = new int[sizeL];
		
		for (int i = 0; i < (sizeL - 1); i++) {
			aa[i] = a[i];
		}

		delete a;

		a = aa;
	}

	a[sizeF] = n;
	sizeF++;
}

void Vector::vector_pop_back() {
	sizeF -= 1;
}

int& Vector::vector_front() {
	return a[0];
}

int& Vector::vector_back() {
	return a[sizeF-1];
}

int Vector::vector_size() {
	return sizeF;
}