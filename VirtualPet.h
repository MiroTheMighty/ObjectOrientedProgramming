#pragma once
#include<string>
#include"Food.h"

using namespace std;

class VirtualPet : Food{
public:
	int glad, sreca;
	bool spava;
	string ime;
	string vrsta;

	void Hranjenje();
	void Spavanje();
	void Igranje();

	VirtualPet(string _ime, string _vrsta) { ime = _ime; vrsta = _vrsta; glad = 0; sreca = 20; spava = false; }

	bool operator==(const VirtualPet& pet) {
		if (pet.ime == ime && pet.vrsta == vrsta && pet.glad == glad && pet.sreca == sreca && pet.spava == spava) {
			return true;
		}
		return false;
	}

	bool operator!=(const VirtualPet& pet) {
		if (pet.ime == ime && pet.vrsta == vrsta && pet.glad == glad && pet.sreca == sreca && pet.spava == spava) {
			return false;
		}
		return true;
	}

	void operator=(const VirtualPet& pet) {
		glad = pet.glad;
		sreca = pet.sreca;
		spava = pet.spava;
		ime = pet.ime;
		vrsta = pet.vrsta;
	}

	VirtualPet operator++() {
		glad += 5;
	}

	VirtualPet operator--() {
		glad -= 5;
	}

	bool operator<(const VirtualPet& pet) {
		return sreca < pet.sreca;
	}

	bool operator>(const VirtualPet& pet) {
		return sreca > pet.sreca;
	}

	bool operator<=(const VirtualPet& pet) {
		return sreca <= pet.sreca;
	}

	bool operator>=(const VirtualPet& pet) {
		return sreca >= pet.sreca;
	}

	friend ostream& operator<< (ostream& os, const VirtualPet& pet) {
		os << "Ime ljubimca je: " << pet.ime << endl << "Vrsta ljubimca je: " << pet.vrsta << endl << "Bodovi srece ljubimca su: " << pet.sreca << endl;
		return os;
	}
};