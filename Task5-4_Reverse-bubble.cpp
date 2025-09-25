#include<iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int arr_size = 10;
	int array[arr_size] = { 83, -132, 141, 48, -81, 114, -187, 164, 9, -34 };
	std::cout << "Массив до сортировки: ";
	for (int i = 0; i < arr_size; i++)
	{
		std::cout << array[i] << "  ";
	}
	for (int i = 0; i < arr_size; i++)
	{
		for (int j = 0; j < arr_size - 1; j++)
		{
			{
				if (array[j] > array[j + 1])      // условие проверки: если следующий элемент меньше предыдущего
				{
					int temp = array[j + 1];      // присваивание временной переменой значения следующего элемента массива
					array[j + 1] = array[j];      // перестановка следующего элемента (если он меньше) на место текущего
					array[j] = temp;              // присваивание текущему элементу (если он больше) значению временной переменной, чтобы переставить на место следующего
				}
			}
		}
	}
		std::cout << std::endl;
		std::cout << "Массив после сортировки : ";
		for (int i = 0; i < arr_size; i++)      
		{
			std::cout << array[i] << "  ";
		}
	return 0;
}