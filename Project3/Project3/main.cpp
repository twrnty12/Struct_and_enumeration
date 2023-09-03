#include <iostream>
#include <string>


struct address
{
	std::string city;
	std::string street;
	int houseNumber;
	int apartmentNumber;
	int index;
};

void printAddress(address* data)
{

	std::cout << "Город: " << data->city << '\n';
	std::cout << "Улица: " << data->street << '\n';
	std::cout << "Номер дома: " << data->houseNumber << '\n';
	std::cout << "Номер квартиры: " << data->apartmentNumber << '\n';
	std::cout << "Индекс: " << data->index << '\n';
	std::cout << std::endl;
}


int main(int argc, char** argv)
{

	setlocale(LC_ALL, "Russian");

	address data = { "Минск", "Совестская", 1, 10, 98765 };
	printAddress(&data);

	data = { "Гомель", "Советская", 15, 20, 777665 };
	printAddress(&data);

	return 0;
}