#include <iostream>
#include <string>




enum class months {
	Конец_программы,
	Январь,
	Февраль,
	Март,
	Апрель,
	Май,
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь

};

std::string monthToString(months month) {
	switch (month)
	{
	case months::Конец_программы:
		return "До свидания!";
		break;
	case months::Январь:
		return "Январь";
	case  months::Февраль:
		return "Февраль";
	case  months::Март:
		return "Март";
	case  months::Апрель:
		return "Апрель";
	case  months::Май:
		return "Май";
	case  months::Июнь:
		return "Июнь";
	case  months::Июль:
		return "Июль";
	case  months::Август:
		return "Август";
	case  months::Сентябрь:
		return "Сентябрь";
	case  months::Октябрь:
		return "Октябрь";
	case  months::Ноябрь:
		return "Ноябрь";
	case  months::Декабрь:
		return "Декабрь";

	}

	return "Неправильный номер!";
}

int main()
{


	setlocale(LC_ALL, "Russian");

	int num = 1;

	while (num != 0) {
		std::cout << "Введите номер месяца: ";
		std::cin >> num;
		months month = static_cast<months>(num);
		std::cout << monthToString(month);
		std::cout << '\n';
	}

	return 0;
}
