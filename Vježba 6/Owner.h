#pragma once
#include<string>
#include<vector>
#include"VirtualPet.h"

using namespace std;

class Owner {
public:
	string ime;
	int brojAkcija;
	vector<VirtualPet> ljubimci;

	//Copy konstruktor
	Owner(const Owner& vlasnik) { ime = vlasnik.ime; ljubimci = vlasnik.ljubimci; }
	Owner(string _ime, int _brojAkcija) { ime = _ime; brojAkcija = _brojAkcija; }
};