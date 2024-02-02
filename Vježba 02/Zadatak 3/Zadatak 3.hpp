#pragma once

struct Vector {

	int* a;
	int sizeL, sizeF;

	void vector_new(int n = 0);
	void vector_delete();
	void vector_push_back(int n);
	void vector_pop_back();
	int& vector_front();
	int& vector_back();
	int vector_size();
};