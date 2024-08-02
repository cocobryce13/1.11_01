#include<iostream>
#include<windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string name;
	std::string sername;
	std::string str3;

	std::cout << "Введите имя: ";
	std::cin >> name;
	
	std::cout << "Введите фамилию: ";
	std::cin >> sername;

	str3 = "Здравствуйте, " + name + " " + sername + "!";
	
	std::cout << str3;

	std::cout << "\n\n\n";

	return 0;
}