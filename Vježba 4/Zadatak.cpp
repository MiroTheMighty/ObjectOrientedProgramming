#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int BrojSubStringova(std::string string, std::string subString) {
	int br = 0;

	for (size_t a = string.find(subString); a != std::string::npos; a = string.find(subString, a + subString.size()))
	{
		br++;
	}

	return br;
}

void MakniRazmake(std::string& string) {
	for (size_t a = string.find(' '); a != std::string::npos; a = string.find(' ', a + 1)) {
		if (string[a + 1] == ',') {
			string[a] = ',';
			string[a + 1] = ' ';
		}
		else if (string[a] == ' ' && string[a + 1] == ' ') {
			string.erase(a + 1, 1);
		}
	}
}

void PreokreniStringove() {
	int n;
	std::cout << "Unesite broj stringova: ";
	std::cin >> n;
	std::vector<std::string> str(n);

	for (int i = 0; i < n; i++) {
		std::cout << "Unesite " << i + 1 << " string: ";
		std::cin >> str[i];
		std::reverse(str[i].begin(), str[i].end());
	}

	std::sort(str.begin(), str.end());

	for (int i = 0; i < n; i++) {
		std::cout << str[i] << std::endl;
	}
}

int main() {
	std::string string = "automehanciar popravlja auto.";
	std::string subString = "auto";
	std::string string1 = "Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno.";
	int n;

	n = BrojSubStringova(string, subString);
	std::cout << n << std::endl;
	MakniRazmake(string1);
	std::cout << string1 << std::endl;
	PreokreniStringove();

	return 0;
}
