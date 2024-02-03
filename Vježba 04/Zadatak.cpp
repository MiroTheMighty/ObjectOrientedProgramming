#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>

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

bool je_samoglasnik(char c)
{
	std::string samoglasnik = "aeiouAEIOU";
	return samoglasnik.find(c) != std::string::npos;
}

std::string prevedi(const std::string& str)
{
	std::string promijenjen_str = str;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
		{
			if (je_samoglasnik(str[i]))
			{
				if (i == 0)
				{
					promijenjen_str = str + "hay";
				}
				else
				{
					promijenjen_str = str.substr(i) + str.substr(0, i) + "ay";
				}
				break;
			}
		}
	}
	return promijenjen_str;
}


int main() {
	std::string string = "automehanciar popravlja auto.";
	std::string subString = "auto";
	std::string string1 = "Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno.";
	std::vector<std::string> input_recenice;

	input_recenice.push_back("Where are you");
	input_recenice.push_back("Do you have the time");
	input_recenice.push_back("What time is it");

	int numStrings = input_recenice.size();

	int randomIndex = rand() % numStrings;
	std::string randomString = input_recenice[randomIndex];
	std::string pigLatinString = "";
	std::string str;
	std::istringstream iss(randomString);
	while (iss >> str)
	{
		if (!pigLatinString.empty())
		{
			pigLatinString += " ";
		}
		pigLatinString += prevedi(str);
	}
	std::cout << "Random string: " << randomString << std::endl;
	std::cout << "Pig Latin transformacija: " << pigLatinString << std::endl;
	int n;

	n = BrojSubStringova(string, subString);
	std::cout << n << std::endl;
	MakniRazmake(string1);
	std::cout << string1 << std::endl;
	PreokreniStringove();

	return 0;
}
