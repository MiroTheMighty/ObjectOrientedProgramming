#pragma once
#include<string>

using namespace std;

class VirtualPet {
public:
	int glad, sreca;
	bool spava;
	string ime;
	string vrsta;

	void Hranjenje();
	void Spavanje();
	void Igranje();

	VirtualPet(string _ime, string _vrsta) { ime = _ime; vrsta = _vrsta; glad = 0; sreca = 0; spava = false; }
};