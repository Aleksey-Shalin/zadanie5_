#include<iostream>
#include<iomanip> // для функции setw(), чтобы установить ширину поля ввода-вывода
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int rows = 3;
	const int columns = 6;
	int arr[rows][columns]{         
		{-24, 221, 332, 391, 83, -344},
		{298, -82, -143, 363, 178, 416},
		{261, 132, -274, -417, -207, 31}
	};
	int min = arr[0][0];     
	int max = arr[0][0];
	int index_min_row = 0;    // для определения строки минимального элемента в массиве
	int index_min_column = 0;   // для определения столбца минимального элемента в массиве
	int index_max_row = 0;     // для определения строки максимального элемента в массиве
	int index_max_column = 0;    // для определения столбца максимального элемента в массиве
	for (int i = 0; i < rows; i++)       // для перебора элементов массива по строкам
	{
		for (int j = 0; j < columns; j++)     // для перебора элементов массива по столбцам
		{
			std::cout << std::right << std::setw(4) << arr[i][j] << "\t";    // std::right для выравнивания вывода по правому краю
			if (arr[i][j] < min)    
			{
				min = arr[i][j];     
				index_min_row = i;      
				index_min_column = j; 
			}
			if (arr[i][j] > max)    
			{
				max = arr[i][j];    
				index_max_row = i;      
				index_max_column = j;   
			}
		}
		std::cout << std::endl;
	}
	std::cout << "Индекс минимального элемента: " << index_min_row << " " << index_min_column << std::endl;   
	std::cout << "Индекс максимального элемента: " << index_max_row << " " << index_max_column << std::endl;
	return 0;
}