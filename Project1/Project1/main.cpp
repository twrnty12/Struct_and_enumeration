#include <iostream>
#include <string>




enum class months {
	�����_���������,
	������,
	�������,
	����,
	������,
	���,
	����,
	����,
	������,
	��������,
	�������,
	������,
	�������

};

std::string monthToString(months month) {
	switch (month)
	{
	case months::�����_���������:
		return "�� ��������!";
		break;
	case months::������:
		return "������";
	case  months::�������:
		return "�������";
	case  months::����:
		return "����";
	case  months::������:
		return "������";
	case  months::���:
		return "���";
	case  months::����:
		return "����";
	case  months::����:
		return "����";
	case  months::������:
		return "������";
	case  months::��������:
		return "��������";
	case  months::�������:
		return "�������";
	case  months::������:
		return "������";
	case  months::�������:
		return "�������";

	}

	return "������������ �����!";
}

int main()
{


	setlocale(LC_ALL, "Russian");

	int num = 1;

	while (num != 0) {
		std::cout << "������� ����� ������: ";
		std::cin >> num;
		months month = static_cast<months>(num);
		std::cout << monthToString(month);
		std::cout << '\n';
	}

	return 0;
}
