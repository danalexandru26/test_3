#include<iostream>
#include<fstream>
#include<string>

void main()
{
	std::fstream fs("Resources/Greeting.txt");

	if (fs.is_open())
	{
		std::string line;
		std::getline(fs, line);
		std::cout << line << '\n';
	}
	else
	{
		std::cout << "Error 2";
	}
}