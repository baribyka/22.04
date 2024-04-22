#include <iostream>
template <typename T>
void pswap(T* pointer1, T* pointer2) {
	T tmp = *pointer1;
	*pointer1 = *pointer2;
	*pointer2 = tmp;
}
template<typename T>
void rswap(T& ref1,T& ref2) {
	T tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;
}
void foo(int& ref1, int& ref2);

int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	//модуль 6 занятие 45-46
	//Нейтральные указатели
	/*
	int* p1 = 0;
	if (p1 != 0)
		std::cout << p1 << std::endl;
	else
		std::cout << "Указатель не инициализирован\n";


	int* p2 = NULL;
	if (p2 != NULL)
		std::cout << p2 << std::endl;
	else
		std::cout << "Указатель не инициализирован\n";

	int* p3 = nullptr;
	if (p3 != nullptr)
		std::cout << p3 << std::endl;
	else
		std::cout << "Указатель не инициализирован\n";
*/
	//Модефикации указателей
	/*n = 7, m = 15;
	//Указатель на константу. Может быть объявлен без инициалезации и может менять свое значение в любой момент работы программы
	// ,но с его помощью не получится поменять значение памяти на которую он направлен.
	const int* pointer1;
	pointer1 = &n;
	//*pointer1 = 5; ОШИБКА!!
	std::cout << pointer1 <<std::endl;

	//Константный указатель или указатель-константа.
	//Не может быть объявлен без инициализации и не может менять своего значения
	//,но с его помощью можно поменять значение его памяти на которую он направлен.
	int* const pointer2= &n;
	//pointer2 = &m;  ОШИБКА!
	*pointer2 = 5;
	std::cout << *pointer2 << std::endl;


	//Константный указатель на константу.Не может быть объявлен без инициализации и не может менть свое значение.
	//  С его помощью нельзя поменять значение памяти,на которую он направлен
	const int* const pointer3=&m;
	//pointer3 = &n; //ОШИБКА!
	//*pointer3 = 42; /ОШИБКА!
	std::cout << *pointer3 << std::endl;
	*/
	//Ссылки на переменные
	/*n = 7;
	int& refn=n;//ссылка ассоцеированая с переменной n
	std::cout << "n = " << n << std::endl;
	std::cout << "refn = " << refn << std::endl;
	n = 15;
	std::cout << "refn = " << refn << std::endl;//значение ссылки поменялось
	*/

	//Ссылки и функции
	n = 7, m = 15;
	std::cout << n << ' ' << m << std::endl;
	//pswap(&n, &m);       //работает но неудобно
	rswap(n, m);
	std::cout << n << ' ' << m << std::endl;

	//Задача 1 Ссылочная функция

	std::cout << "Введите 2 числа -> ";
	std::cin >> n >> m;
	foo(n, m);
	
	std::cout << "n = " << n << "; m = " << m << "\n\n";


	return 0;
}
void foo(int& var1, int& var2) {
	if (var1 > var2) {
		var1 *= var2;
		var2 *= var2;
		return;
	}
	var1 = 0;
	var2 = 0;
}