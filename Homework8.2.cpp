// Homework8.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n = 0;
	int tmp;
	std::set <int> s;
	std::vector <int> v;


	std::cout << "Введите введите общее число элементов:\n";
	std::cin >> n;
	std::cout << "Введите " << n << " чисел:\n";
	for (int i = 0; i < n; i++) {
		std::cin >> tmp;
		s.insert(tmp);
	}
	for (auto i : s) {
		v.push_back(i);
	}
	std::sort(std::begin(v), std::end(v), std::greater<>());
	std::cout << "Введенные числа без повторений в порядке убывания: \n";
	for (auto i : v) {
		std::cout << i << std::endl;
	}
}

