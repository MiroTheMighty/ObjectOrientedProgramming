#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include"VirtualPet.h"
#include"Owner.h"

using namespace std;

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
	int j = 0;
	for (size_t i = 0; i < _vlasnici.size(); i++, j++) {
		_vlasnici[i].ljubimci = _ljubimci[j];
	}
}

void Akcije(vector<Owner> vlasnici) {
	for (Owner owner : vlasnici) {
		for (VirtualPet pet : owner.ljubimci) {
			for (int i = 0; i < owner.brojAkcija; i++) {
				int rnd = rand() % 3;
				switch (rnd) {
				case 0:
					pet.Hranjenje();
					break;
				case 1:
					pet.Igranje();
					break;
				case 2:
					pet.Spavanje();
					break;
				default:
					break;
				}
			}
		}
	}
}

void NajsretnijiLjubimac(vector<Owner> vlasnici) {
	int max = 0, k = 0, h = 0;
	for (Owner owner : vlasnici) {
		for (VirtualPet pet : owner.ljubimci) {
			if(pet.sreca > max){
				max = pet.sreca;
			}
		}
		owner.najsretnijiLjubimac = max;
	}
	max = vlasnici[0].najsretnijiLjubimac;
	for (Owner owner : vlasnici) {
		if (owner.najsretnijiLjubimac > max) {
			max = owner.najsretnijiLjubimac;
			h = k;
		}
		k++;
	}
	cout << vlasnici[h].ime;
}

int main() {
	srand(time(0));
	int brojVlasnika, brojAkcija, brojLjubimaca;
	vector<Owner> vlasnici;
	vector<vector<VirtualPet>> ljubimci;

	cout << "Unesite broj vlasnika: ";
	cin >> brojVlasnika;
	cout << "Unesite broj akcije koje ce vlasnici imati: ";
	cin >> brojAkcija;
	cout << "Unesite broj ljubimaca koje ce svaki vlasnik imati: ";
	cin >> brojLjubimaca;

	vlasnici = UnesiVlasnike(brojVlasnika, brojAkcija);
	for (int i = 0; i < brojVlasnika; i++) {
		ljubimci.push_back(UnesiLjubimce(brojLjubimaca));
	}
	DodijeliLjubimce(vlasnici, ljubimci);
	Akcije(vlasnici);
	NajsretnijiLjubimac(vlasnici);

	return 0;
}
