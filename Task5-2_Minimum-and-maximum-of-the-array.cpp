#include<iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int array_size = 10;   
	int arr[array_size] = { 37, 16, -14, -39, 31, 24, -3, 7, 42, -26 };  
	int min = arr[0];    // изначально устанавливается минимальным первый элемент массива, затем в цикле элементы сраниваются между собой
	int max = arr[0];    // изначально устанавливается максимальным первый элемент массива, затем в цикле элементы сраниваются между собой
	for (int array_element = 0; array_element < array_size; array_element++)  
	{
		std::cout << arr[array_element] << "  ";
		if (arr[array_element] < min)    // методом перебора всех элементов определяется минимальный по значению
		{
			min = arr[array_element];  
		}
		if (arr[array_element] > max)    // методом перебора всех элементов определяется максимальный по значению
		{
			max = arr[array_element];   
		}
	}
	std::cout << std::endl;
	std::cout << "Минимальный элемент: " << min << std::endl;
	std::cout << "Максимальный элемент: " << max << std::endl;
	return 0;
}