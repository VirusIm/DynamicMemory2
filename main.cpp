#include <iostream>

#define tab "\t"

/*
TODO:
1. git clone https://github.com/okovtun/DynamicMemory2_34a
2. ������ �������� ������� � ������� �� ���������, ������� �������� �� ������.
void push_row_back(int**& Arr, int& m, const int n);

*/

//ROWS
template <typename T> void FillRand(T** Arr, const int m, const int n);
template <typename T> void Print(T** Arr, const int m, const int n);
template <typename T> void Delete(T** Arr, const int m, const int n);

template <typename T> void PushRowBack(T **& Arr, int& m, int& n);
template <typename T> void PushRowFront(T**& Arr, int& m, int& n);
template <typename T> void InsertRow(T **& Arr, int& m, int& n, long long int& index);

template <typename T> void PopRowBack(T**& Arr, int& m, int& n);
template <typename T> void PopRowFront(T **& Arr, int& m, int& n);
template <typename T> void EraseRow(T**& Arr, int& m, int& n, long long int& index);

//COLS
template <typename T> void PushColBack(T** Arr, int& m, int& n);
template <typename T> void PushColFront(T** Arr, int& m, int& n);
template <typename T> void InsertCol(T** Arr, const int m, int& n, long long int& index);

template <typename T> void PopColBack(T** Arr, const int m, int& n);
template <typename T> void PopColFront(T** Arr, const int m, int& n);
template <typename T> void EraseCol(T** Arr, const int m, int& n, long long int& index);

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

	int m;		//������
	int n;		//������� ������
	std::cout << "������� ���������� �����: "; std::cin >> m;
	std::cout << "������� ���������� ��������� �����: "; std::cin >> n;
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
	// ���������� ������ ������ � ����� ���
	std::cout << std::endl;
	std::cout << std::endl;
	PushRowBack(Arr, m, n);
	Print(Arr, m, n);

	for (int i = 0; i < 67; i++)
	{
		if (i >= 35 && i <= 35)
		{
			std::cout << "---PushRowFront---";
		}
		std::cout << "=";
	}
	//���������� ������ ������ � ������ ���
	std::cout << std::endl;
	std::cout << std::endl;
	PushRowFront(Arr, m, n);
	Print(Arr, m, n);

	for (int i = 0; i < 70; i++)
	{
		if (i >= 36 && i <= 36)
		{
			std::cout << "---InsertRow---";
		}
		std::cout << "=";
	}
	//���������� ������ ������� �� ������� � ���
	std::cout << std::endl;
	std::cout << std::endl;
	long long int index;
	InsertRow(Arr, m, n, index);
	Print(Arr, m, n);

	for (int i = 0; i < 69; i++)
	{
		if (i >= 35 && i <= 35)
		{
			std::cout << "---PopRowBack---";
		}
		std::cout << "=";
	}
	//�������� ��������� ������� � ���
	std::cout << std::endl;
	std::cout << std::endl;
	PopRowBack(Arr, m, n);
	Print(Arr, m, n);

	for (int i = 0; i < 68; i++)
	{
		if (i >= 34 && i <= 34)
		{
			std::cout << "---PopRowFront---";
		}
		std::cout << "=";
	}
	//�������� ������ ������� � ���
	std::cout << std::endl;
	std::cout << std::endl;
	PopRowFront(Arr, m, n);
	Print(Arr, m, n);

	for (int i = 0; i < 71; i++)
	{
		if (i >= 35 && i <= 35)
		{
			std::cout << "---EraseRow---";
		}
		std::cout << "=";
	}
	//�������� ������� �� ������� � ���
	std::cout << std::endl;
	std::cout << std::endl;
	EraseRow(Arr, m, n, index);
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
	// ���������� ������� �������� ������ � ����� ���

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
	// ���������� ������� �������� ������ � ������ ���
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
	//���������� ������� �������� ������ �� ��������� ������� � ���
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "������� ������� ������: "; std::cin >> index;
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
	//�������� ��������� ������ � ���
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
	//�������� ������ ������ � ���
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
	//�������� �������� ������ �� ������� 
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "������� ������: "; std::cin >> index;
	EraseCol(Arr, m, n, index);
	Print(Arr, m, n);
	std::cout << std::endl;

	Delete(Arr, m, n);
}

template <typename T> void FillRand(T** Arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			*(*(Arr + i) + j) = rand() % (80 - 50) + 50;
		}
	}
}
template <typename T> void Print(T** Arr, const int m, const int n)
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
template <typename T> void Delete(T** Arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		delete[] Arr[i];
	}
	delete[] Arr;
}

//ROWS
template <typename T> void PushRowBack(T**& Arr, int& m, int& n)
{
	T** Buffer = new T*[m + 1];
	for (int i = 0; i < m; i++)
	{
		Buffer[i] = Arr[i];
	}
	delete[] Arr;
	Arr = Buffer;
	Arr[m] = new T[n] {};
	m++;
	//return *Arr;
}
template <typename T> void PushRowFront(T**& Arr, int& m, int& n)
{
	T** Buffer = new T*[m + 1];
	for (int i = 0; i < m; i++)
	{
		Buffer[i + 1] = Arr[i];
	}
	delete[] Arr;
	Arr = Buffer;
	Arr[0] = new T[n] {};
	m++;
	//return *Arr;
}
template <typename T> void InsertRow(T**& Arr, int& m, int& n,long long int& index)
{
	std::cout << "������� ������: "; std::cin >> index;
	if (index > m || index < 0)
	{
		std::cout << "Error!";
		std::cout << std::endl;
		return InsertRow(Arr, m, n, index);
	}
	T** Buffer = new T*[m + 1];
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
	Arr[index] = new T[n] {};
	m++;
	//return Arr;
}

template <typename T> void PopRowBack(T **& Arr, int& m, int& n)
{
	T** Buffer = new T*[--m];
	for (int i = 0; i < m; i++)
	{
		Buffer[i] = Arr[i];
	}
	delete[] Arr;
	Arr = Buffer;
	//m--;
	//return Arr;
}
template <typename T> void PopRowFront(T **& Arr, int& m, int& n)
{
	T** Buffer = new T*[m - 1];
	for (int i = 0; i < m; i++)
	{
		Buffer[i] = Arr[i + 1];
	}
	delete[] Arr;
	Arr = Buffer;
	m--;
	//return Arr;
}
template <typename T> void EraseRow(T **& Arr, int& m, int& n, long long int& index)
{
	T** Buffer = new T*[m];
	std::cout << "������� ������: "; std::cin >> index;
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
	//return Arr;
}

//COLS
template <typename T> void PushColBack(T** Arr, int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T* Buffer = new T[n + 1]{};
		for (int j = 0; j < n; j++)
		{
			Buffer[j] = Arr[i][j];
		}
		delete[] Arr[i];
		Arr[i] = Buffer;
	}
	n++;
	//return Arr;
}
template <typename T> void PushColFront(T** Arr, int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T* Buffer = new T[n + 1]{};
		for (int j = 0; j < n; j++)
		{
			Buffer[j + 1] = Arr[i][j];
		}
		delete[] Arr[i];
		Arr[i] = Buffer;
	}
	n++;
	//return Arr;
}
template <typename T> void InsertCol(T** Arr, const int m, int& n, long long int& index)
{
	for (int i = 0; i < m; i++)
	{
		T* Buffer = new T[n + 1]{};
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
	//return Arr;
}

template <typename T> void PopColBack(T** Arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T* Buffer = new T[n] {};
		for (int j = 0; j < n; j++)
		{
			Buffer[j] = Arr[i][j];
		}
		delete[] Arr[i];
		Arr[i] = Buffer;
	}
	n--;
	//return Arr;
}
template <typename T> void PopColFront(T** Arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T*Buffer = new T[n] {};
		for (int j = 0; j < n; j++)
		{
			Buffer[j] = Arr[i][j + 1];
		}
		delete[] Arr[i];
		Arr[i] = Buffer;
	}
	n--;
	//return Arr;
}
template <typename T> void EraseCol(T** Arr, const int m, int& n, long long int& index)
{
	for (int i = 0; i < m; i++)
	{
		T* Buffer = new T[n] {};
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
	//return Arr;
}