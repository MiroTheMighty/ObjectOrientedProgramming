#include<iostream>
#include<string>

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
		else if (string[a] == ' ' && string[a+1] == ' ') {
			string.erase(a+1, 1);
		}
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

	return 0;
}