#include<iostream>
#include<algorithm>

class Karta {
	public:
		Karta() { broj = 1; zog = " "; }
		int broj;
		std::string zog;
};

class Igrac {
public:
	Igrac() { bodovi = 0; }
	std::string ime;
	Karta karte[10];
	int bodovi;
	int Akuza();
};

class Mac {
	public:
		Karta mac[40];
		void GenerirajMac();
		void PromijesajMac();
		void PodijeliKarte(Igrac igraci[], int brojIgraca);
};

void Mac::GenerirajMac() {
	std::string zogovi[4] = {"Spade", "Dinari", "Bati", "Kupe"};
	int br = 0;
	int n = 1, h = 11;

	while (br < 40) {
		if (br < 10) {
			for (int i = 0; i < 10; i++) {
				mac[i].zog = zogovi[0];
				if (n <= 7) {
					mac[i].broj = n;
					n++;
				}
				else {
					mac[i].broj = h;
					h++;
				}
				br++;
			}
			n = 1;
			h = 11;
		}
		if (br < 20) {
			for (int j = 10; j < 20; j++) {
				mac[j].zog = zogovi[1];
				if (n <= 7) {
					mac[j].broj = n;
					n++;
				}
				else {
					mac[j].broj = h;
					h++;
				}
				br++;
			}
			n = 1;
			h = 11;
		}
		if (br < 30) {
			for (int k = 20; k < 30; k++) {
				mac[k].zog = zogovi[2];
				if (n <= 7) {
					mac[k].broj = n;
					n++;
				}
				else {
					mac[k].broj = h;
					h++;
				}
				br++;
			}
			n = 1;
			h = 11;
		}
		if (br < 40) {
			for (int z = 30; z < 40; z++) {
				mac[z].zog = zogovi[3];
				if (n <= 7) {
					mac[z].broj = n;
					n++;
				}
				else {
					mac[z].broj = h;
					h++;
				}
				br++;
			}
			n = 1;
			h = 11;
		}
	}
}

void Mac::PromijesajMac() {
	std::srand(std::time(0));
	std::random_shuffle(&mac[0], &mac[40]);
}

void Mac::PodijeliKarte(Igrac igraci[], int brojIgraca) {
	if (brojIgraca == 2) {
		for (int i = 0; i < 10; i++) {
			igraci[0].karte[i] = mac[i];
		}
		for (int i = 10; i < 20; i++) {
			igraci[1].karte[i] = mac[i];
		}
	}
	else if (brojIgraca == 4) {
		for (int i = 0; i < 10; i++) {
			igraci[0].karte[i] = mac[i];
		}
		for (int i = 10; i < 20; i++) {
			igraci[1].karte[i] = mac[i];
		}
		for (int i = 0; i < 10; i++) {
			igraci[2].karte[i] = mac[i];
		}
		for (int i = 10; i < 20; i++) {
			igraci[3].karte[i] = mac[i];
		}
	}
	else {
		std::cout << "Greška u dijeljenu karta!";
	}
}

int Igrac::Akuza() {
	return 1;
}

int main() {
	int brojIgraca;
	Mac mac;
	Igrac igraci[4];

	std::cout << "Unesite broj igraca(2 ili 4): ";
	std::cin >> brojIgraca;

	mac.GenerirajMac();
	mac.PromijesajMac();
	mac.PodijeliKarte(igraci, brojIgraca);

	for (int i = 0; i < brojIgraca; i++) {
		std::cout << "Unesite ime " << i + 1 << " igraca: ";
		std::cin >> igraci[i].ime;
	}

	for (int i = 0; i < 10; i++) {
		std::cout << igraci[0].karte[i].zog << " " <<igraci[0].karte[i].broj << std::endl;
	}

	return 0;
}