#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <string>


struct account {

	int number;
	std::wstring ownerName;
	double sum;

};

int wmain(int argc, char** argv) {

	_setmode(_fileno(stdout), _O_U16TEXT);
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stderr), _O_U16TEXT);

	//setlocale(LC_ALL, "Russian");

	account data;

	std::wcout << L"������� ����� �����: ";
	std::wcin >> data.number;

	std::wcout << L"������� ��� ���������: ";
	std::wcin >> data.ownerName;

	std::wcout << L"������� ������: ";
	std::wcin >> data.sum;

	std::wcout << L"������� ����� ������: ";
	std::wcin >> data.sum;

	std::wcout << L"��� ����: " << data.number << ", " << data.ownerName << ", " << data.sum << '\n';


	return 0;
}