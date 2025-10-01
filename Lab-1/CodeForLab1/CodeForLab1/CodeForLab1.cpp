#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	double TheFirstNumber; // выбран тип данных double, т.к. в задании говорится про действительную ось (поэтому могут использоваться вещественные числа). Выбран double, а не float, т.к. количество значащих цифр не определено.
	double TheSecondNumber; // аналогично

	std::cout << "Введите значения на действительной оси (2 числа):" << std::endl;
	std::cin >> TheFirstNumber >> TheSecondNumber;

	double TheMiddle = (TheFirstNumber + TheSecondNumber) / 2; // double, т.к. результат может быть вещественным числом
	std::cout << "Середина интервала равна " << TheMiddle << std::endl;

	int UpperLimitForDouble = pow(2, 64) / 2 - 1; // int, т.к. экспоненциальный вид не требуется экспоненциальный вид числа
	int LowerLimitForDouble = pow(2, 64) / -2; // аналогично

	int UpperLimitForInt = pow(2, 32) / 2 - 1; // аналогично
	int LowerLimitForInt = pow(2, 32) / -2; // аналогично

	std::cout << "double занимает 64 бита, имеет 15-16 значащих цифр и принимает значения в диапазоне " << LowerLimitForDouble << " - " << UpperLimitForDouble << std::endl;
	std::cout << "int занимает 32 бита и принимает значения в диапазоне " << LowerLimitForInt << " - " << UpperLimitForInt << std::endl;

	return 0;
}