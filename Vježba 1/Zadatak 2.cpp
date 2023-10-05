#include <iostream>
#include <iomanip>

int main()
{
	bool flag;
	std::cout << "Unesi " << true << " - " << false << std::endl;
	std::cin >> flag;
	std::cout << std::boolalpha << flag << std::endl;

	int a = 255;
	std::cout << "Hex " << std::hex << a << std::endl;
	std::cout << "Dec " << std::dec << a << std::endl;
	std::cout << "Oct " << std::oct << a << std::endl;

	double pi = 3.141592;
	std::cout << "PI = " << std::scientific << std::uppercase;
	std::cout << std::setprecision(7) << std::setw(20) << std::setfill('0');
	std::cout << pi << std::endl;
}
