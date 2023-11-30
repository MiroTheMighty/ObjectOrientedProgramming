#pragma once
#include<string>
#include<vector>
#include"VirtualPet.h"

using namespace std;

class Owner {
public:
	string ime;
	int brojAkcija;
	int najsretnijiLjubimac;
	vector<VirtualPet> ljubimci;

	
	Owner() { ime = " "; brojAkcija = 0; najsretnijiLjubimac = 0; }
	//Copy konstruktor
	Owner(const Owner& vlasnik) { ime = vlasnik.ime; ljubimci = vlasnik.ljubimci; brojAkcija = vlasnik.brojAkcija; najsretnijiLjubimac = 0; }
	Owner(string _ime, int _brojAkcija) { ime = _ime; brojAkcija = _brojAkcija; najsretnijiLjubimac = 0; }
	Owner(Owner&& other) : ime(move(other.ime)), brojAkcija(move(other.brojAkcija)), najsretnijiLjubimac(move(other.najsretnijiLjubimac)), ljubimci(move(other.ljubimci)) {}
};