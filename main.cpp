#include <iostream>

#define tab "\t"

/*
	TODO:
	Вместо передачи массива в функцию по указателю, сделать передачу по ссылке.
	void push_row_back(int**& Arr, int& m, const int n);
*/

/*
DONE:
0. Вывести двумерный динамический массив на экран, используя Арифметику указателей, и оператор разыменования;
1. Написать функцию ??? push_row_back(???), которая добавляет пустую строку (заполненную нулями) в конец массива;
2. Написать функцию ??? push_row_front(???), которая добавляет пустую строку в начало массива;
3. Написать функцию ??? insert_row(???), которая добавляет пустую строку в массив по указанному индексу;
4. Написать функцию ??? pop_row_back(???), которая удаляет строку из конца массива;
5. Написать функцию ??? pop_row_front(???), которая удаляет строку с начала массива;
6. Написать функцию ??? erase_row(???), которая удаляет строку из массива, по указанному индексу;
*/
//ROWS
void FillRand(int** Arr, const int m, const int n);
void Print(int** Arr, const int m, const int n);
void Delete(int** Arr, const int m, const int n);

void PushRowBack(int *** Arr, int& m, int& n);
void PushRowFront(int *** Arr, int& m, int& n);
int** InsertRow(int** Arr, int& m, int& n, long long int& index);

int** PopRowBack(int** Arr, int& m, int& n);
int** PopRowFront(int** Arr, int& m, int& n);
int** EraseRow(int** Arr, int& m, int& n, long long int& index);

//COLS
int** PushColBack(int** Arr, int& m, int& n);
int** PushColFront(int** Arr, int& m, int& n);
int** InsertCol(int** Arr, const int m, int& n, long long int& index);

int** PopColBack(int** Arr, const int m, int& n);
int** PopColFront(int** Arr, const int m, int& n);
int** EraseCol(int** Arr, const int m, int& n, long long int& index);

void main()
{
	setlocale(0, "");
	for (int i = 0; i < 85; i++)
	{
		if (i >= 40 && i < 41)
		{
			std::cout << "---ROWS---";
		}
		else
			std::cout << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < 85; i++)
	{
		std::cout << "=";
	}
	std::cout << std::endl;

	int m;		//Строки
	int n;		//Элемент строки
	std::cout << "Введите количество строк: "; std::cin >> m;
	std::cout << "Введиет количество элементов строк: "; std::cin >> n;
	std::cout << std::endl;

	int** Arr = new int*[m];
	for (int i = 0; i < m; i++)
	{
		Arr[i] = new int[n] {};
	}
	FillRand(Arr, m, n);
	Print(Arr, m, n);

	for (int i = 0; i < 68; i++)
	{
		if (i >= 35 && i <= 35)
		{
			std::cout << "---PushRowBack---";
		}
		std::cout << "=";
	}
	// ДОБАВЛЕНИЕ ПУСТОЙ СТРОКИ В КОНЕЦ ДДМ
	std::cout << std::endl;
	std::cout << std::endl;
	PushRowBack(&Arr, m, n);
	Print(Arr, m, n);

	for (int i = 0; i < 67; i++)
	{
		if (i >= 35 && i <= 35)
		{
			std::cout << "---PushRowFront---";
		}
		std::cout << "=";
	}
	//ДОБАВЛЕНИЕ ПУСТОЙ СТРОКИ В НАЧАЛО ДДМ
	std::cout << std::endl;
	std::cout << std::endl;
	PushRowFront(&Arr, m, n);
	Print(Arr, m, n);

	for (int i = 0; i < 70; i++)
	{
		if (i >= 36 && i <= 36)
		{
			std::cout << "---InsertRow---";
		}
		std::cout << "=";
	}
	//ДОБАВЛЕНИЕ ПУСТОЙ СТРОЧКИ ПО ИНДЕКСУ В ДДМ
	std::cout << std::endl;
	std::cout << std::endl;
	long long int index;
	Arr = InsertRow(Arr, m, n, index);
	Print(Arr, m, n);

	for (int i = 0; i < 69; i++)
	{
		if (i >= 35 && i <= 35)
		{
			std::cout << "---PopRowBack---";
		}
		std::cout << "=";
	}
	//УДАЛЕНИЕ ПОСЛЕДНЕЙ СТРОЧКИ В ДДМ
	std::cout << std::endl;
	std::cout << std::endl;
	Arr = PopRowBack(Arr, m, n);
	Print(Arr, m, n);

	for (int i = 0; i < 68; i++)
	{
		if (i >= 34 && i <= 34)
		{
			std::cout << "---PopRowFront---";
		}
		std::cout << "=";
	}
	//УДАЛЕНИЕ ПЕРВОЙ СТРОЧКИ В ДДМ
	std::cout << std::endl;
	std::cout << std::endl;
	Arr = PopRowFront(Arr, m, n);
	Print(Arr, m, n);

	for (int i = 0; i < 71; i++)
	{
		if (i >= 35 && i <= 35)
		{
			std::cout << "---EraseRow---";
		}
		std::cout << "=";
	}
	//УДАЛЕНИЕ СТРОЧКИ ПО ИНДЕКСУ В ДДМ
	std::cout << std::endl;
	std::cout << std::endl;
	Arr = EraseRow(Arr, m, n, index);
	Print(Arr, m, n);
	for (int i = 0; i < 85; i++)
	{
		std::cout << "=";
	}
	std::cout << std::endl;
	for (int i = 0; i < 85; i++)
	{
		if (i >= 40 && i < 41)
		{
			std::cout << "---COLS---";
		}
		else
			std::cout << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < 85; i++)
	{
		std::cout << "=";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	FillRand(Arr, m, n);
	Print(Arr, m, n);

	for (int i = 0; i < 68; i++)
	{
		if (i >= 35 && i <= 35)
		{
			std::cout << "---PushColBack---";
		}
		std::cout << "=";
	}
	// ДОБАВЛЕНИЕ ПУСТОГО ЭЛЕМЕНТА СТРОКИ В КОНЕЦ ДДМ

	std::cout << std::endl;
	PushColBack(Arr, m, n);
	Print(Arr, m, n);
	std::cout << std::endl;

	for (int i = 0; i < 67; i++)
	{
		if (i >= 35 && i <= 35)
		{
			std::cout << "---PushColFront---";
		}
		std::cout << "=";
	}
	// ДОБАВЛЕНИЕ ПУСТОГО ЭЛЕМЕНТА СТРОКИ В НАЧАЛО ДДМ
	std::cout << std::endl;
	std::cout << std::endl;
	PushColFront(Arr, m, n);
	Print(Arr, m, n);
	std::cout << std::endl;

	for (int i = 0; i < 70; i++)
	{

		if (i >= 36 && i <= 36)
		{
			std::cout << "---InsertCol---";
		}
		std::cout << "=";
	}
	//ДОБАВЛЕНИЕ ПУСТОГО ЭЛЕМЕНТА СТРОКИ ПО УКАЗАНОМУ ИНДЕКСУ В ДДМ
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Введите элемент строки: "; std::cin >> index;
	InsertCol(Arr, m, n, index);
	Print(Arr, m, n);
	std::cout << std::endl;

	for (int i = 0; i < 68; i++)
	{

		if (i >= 35 && i <= 35)
		{
			std::cout << "---PopColBack---";
		}
		std::cout << "=";
	}
	//УДАЛЕНИЕ ПОСЛЕДНЕЙ СТРОКИ В ДДМ
	std::cout << std::endl;
	std::cout << std::endl;
	PopColBack(Arr, m, n);
	Print(Arr, m, n);
	std::cout << std::endl;
	for (int i = 0; i < 67; i++)
	{

		if (i >= 34 && i <= 34)
		{
			std::cout << "---PopColFront---";
		}
		std::cout << "=";
	}
	//УДАЛЕНИЕ ПЕРВОЙ СТРОКИ В ДДМ
	std::cout << std::endl;
	std::cout << std::endl;
	PopColFront(Arr, m, n);
	Print(Arr, m, n);
	std::cout << std::endl;

	for (int i = 0; i < 70; i++)
	{

		if (i >= 36 && i <= 36)
		{
			std::cout << "---EraseCol---";
		}
		std::cout << "=";
	}
	//УДАЛЕНИЕ ЭЛЕМЕНТА СТРОКИ ПО ИНДЕКСУ 
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Введите интекс: "; std::cin >> index;
	EraseCol(Arr, m, n, index);
	Print(Arr, m, n);
	std::cout << std::endl;

	Delete(Arr, m, n);
}
//ROWS
void FillRand(int** Arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			*(*(Arr + i) + j) = rand() % (80 - 50) + 50;
		}
	}
}
void Print(int** Arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << Arr[i][j] << tab;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
void Delete(int** Arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		delete[] Arr[i];
	}
	delete[] Arr;
}

void PushRowBack(int *** Arr, int& m, int& n)
{
	int** Buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)
	{
		Buffer[i] = (*Arr)[i];
	}
	delete[] (*Arr);
	*Arr = Buffer;
	(*Arr)[m] = new int[n] {};
	m++;
	//return *Arr;
}
void PushRowFront(int *** Arr, int& m, int& n)
{
	int** Buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)
	{
		Buffer[i + 1] = (*Arr)[i];
	}
	delete[] *Arr;
	*Arr = Buffer;
	(*Arr)[0] = new int[n] {};
	m++;
	//return *Arr;
}
int** InsertRow(int** Arr, int& m, int& n, long long int& index)
{
	std::cout << "Введите индекс: "; std::cin >> index;
	if (index > m || index < 0)
	{
		std::cout << "Error!";
		std::cout << std::endl;
		return InsertRow(Arr, m, n, index);
	}
	int** Buffer = new int*[m + 1];
	for (int i = 0; i < index; i++)
	{
		Buffer[i] = Arr[i];
	}
	for (int i = index; i < m; i++)
	{
		Buffer[i + 1] = Arr[i];
	}
	delete[] Arr;
	Arr = Buffer;
	Arr[index] = new int [n] {};
	m++;

	return Arr;
}

int** PopRowBack(int** Arr, int& m, int& n)
{
	int** Buffer = new int*[--m];
	for (int i = 0; i < m; i++)
	{
		Buffer[i] = Arr[i];
	}
	delete[] Arr;
	Arr = Buffer;
	//m--;
	return Arr;
}
int** PopRowFront(int** Arr, int& m, int& n)
{
	int** Buffer = new int*[m - 1];
	for (int i = 0; i < m; i++)
	{
		Buffer[i] = Arr[i + 1];
	}
	delete[] Arr;
	Arr = Buffer;
	m--;
	return Arr;
}
int** EraseRow(int** Arr, int& m, int& n, long long int& index)
{
	int** Buffer = new int*[m];
	std::cout << "Введите индекс: "; std::cin >> index;
	if (index > m || index < 0)
	{
		std::cout << "Error!";
		std::cout << std::endl;
		return EraseRow(Arr, m, n, index);
	}
	for (int i = 0; i < index; i++)
	{
		Buffer[i] = Arr[i];
	}
	for (int i = index; i < m; i++)
	{
		Buffer[i] = Arr[i + 1];
	}
	Arr = Buffer;
	m--;
	return Arr;
}

//COLS
int** PushColBack(int** Arr, int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int* Buffer = new int[n + 1]{};
		for (int j = 0; j < n; j++)
		{
			Buffer[j] = Arr[i][j];
		}
		delete[] Arr[i];
		Arr[i] = Buffer;
	}
	n++;
	return Arr;
}
int** PushColFront(int** Arr, int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int* Buffer = new int[n + 1]{};
		for (int j = 0; j < n; j++)
		{
			Buffer[j + 1] = Arr[i][j];
		}
		delete[] Arr[i];
		Arr[i] = Buffer;
	}
	n++;
	return Arr;
}
int** InsertCol(int** Arr, const int m, int& n, long long int& index)
{
	for (int i = 0; i < m; i++)
	{
		int* Buffer = new int[n + 1]{};
		for (int j = 0; j < index; j++)
		{
			Buffer[j] = Arr[i][j];
		}
		for (int j = index; j < n; j++)
		{
			Buffer[j + 1] = Arr[i][j];
		}
		delete[] Arr[i];
		Arr[i] = Buffer;
	}
	n++;
	return Arr;
}

int** PopColBack(int** Arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int* Buffer = new int[n] {};
		for (int j = 0; j < n; j++)
		{
			Buffer[j] = Arr[i][j];
		}
		delete[] Arr[i];
		Arr[i] = Buffer;
	}
	n--;
	return Arr;
}
int** PopColFront(int** Arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int*Buffer = new int[n] {};
		for (int j = 0; j < n; j++)
		{
			Buffer[j] = Arr[i][j + 1];
		}
		delete[] Arr[i];
		Arr[i] = Buffer;
	}
	n--;
	return Arr;
}
int** EraseCol(int** Arr, const int m, int& n, long long int& index)
{
	for (int i = 0; i < m; i++)
	{
		int* Buffer = new int[n] {};
		for (int j = 0; j < index; j++)
		{
			Buffer[j] = Arr[i][j];
		}
		for (int j = index; j < n; j++)
		{
			Buffer[j] = Arr[i][j + 1];
		}
		delete[] Arr[i];
		Arr[i] = Buffer;
	}
	n--;
	return Arr;
}