#include"VirtualPet.h"

void VirtualPet::Hranjenje() {
	sreca += 5;
	glad += 5;
}

void VirtualPet::Igranje() {
	sreca += 5;
	glad -= 5;
	if (glad == 10) {
		Spavanje();
		spava = true;
	}
}

void VirtualPet::Spavanje() {
	sreca += 5;
	glad -= 5;
	spava = false;
}
