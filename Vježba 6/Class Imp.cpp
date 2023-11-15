#include<string>
#include<vector>
#include<iostream>
#include"Class H.h"

using namespace std;

void VirtualPet::Hranjenje() {
	sreca += 5;
	glad -= 5;
}

void VirtualPet::Igranje() {
	sreca += 5;
	glad += 5;
}

void VirtualPet::Spavanje() {
	sreca += 5;
	glad += 5;
}

vector<Owner> UnesiVlasnike(int n, int brojAkcija) {
	vector<Owner> vlasnici;
	string ime;

	for (int i = 0; i < n; i++) {
		cout << "Unesite ime " << i + 1 << " vlasnika: ";
		cin >> ime;
		vlasnici.push_back(Owner(ime, brojAkcija));
	}

	return vlasnici;
}

vector<VirtualPet> UnesiLjubimce(int n) {
	vector<VirtualPet> ljubimci;
	string ime;
	string vrsta;

	for (int i = 0; i < n; i++) {
		cout << "Unesite ime " << i + 1 << " ljubimca: ";
		cin >> ime; 
		cout << "Unesite vrstu " << i + 1 << " ljubimca: ";
		cin >> vrsta;
		ljubimci.push_back(VirtualPet(ime, vrsta));
	}

	return ljubimci;
}

void DodijeliLjubimce(vector<Owner>& _vlasnici, vector<vector<VirtualPet>> _ljubimci) {
	for (int i = 0; i < _vlasnici.size(); i++) {
		_vlasnici[i].ljubimci = _ljubimci[i];
	}
}