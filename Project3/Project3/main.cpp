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

	std::cout << "�����: " << data->city << '\n';
	std::cout << "�����: " << data->street << '\n';
	std::cout << "����� ����: " << data->houseNumber << '\n';
	std::cout << "����� ��������: " << data->apartmentNumber << '\n';
	std::cout << "������: " << data->index << '\n';
	std::cout << std::endl;
}


int main(int argc, char** argv)
{

	setlocale(LC_ALL, "Russian");

	address data = { "�����", "����������", 1, 10, 98765 };
	printAddress(&data);

	data = { "������", "���������", 15, 20, 777665 };
	printAddress(&data);

	return 0;
}