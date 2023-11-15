#pragma once
#include<string>
#include<vector>

using namespace std;

class VirtualPet {
private:
	int glad, sreca;
	bool spava;
public:
	string ime;
	string vrsta;

	void Hranjenje();
	void Spavanje();
	void Igranje();

	VirtualPet(string _ime, string _vrsta) { ime = _ime; vrsta = _vrsta; glad = 0; sreca = 0; spava = false; }
};

class Owner {
public:
	string ime;
	int brojAkcija;
	vector<VirtualPet> ljubimci;

	Owner(Owner& vlasnik) { ime = vlasnik.ime; ljubimci = vlasnik.ljubimci; }
	Owner(string _ime, int _brojAkcija) { ime = _ime; brojAkcija = _brojAkcija; }
};

vector<Owner> UnesiVlasnike(int n, int brojAkcija);
vector<VirtualPet> UnesiLjubimce(int n);
void DodijeliLjubimce(vector<Owner>& _vlasnici, vector<vector<VirtualPet>> _ljubimci);