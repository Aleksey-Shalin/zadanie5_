#include<iostream>
#include<algorithm> 
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
		bool flag = true;
		for (int j = 0; j < arr_size - 1; j++)
		{
			if (array[j] > array[j + 1])      
			{
				flag = false;
				std::swap(array[j+1], array[j]);
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