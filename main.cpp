#include <iostream>

#define tab "\t"

/*
TODO:
1. git clone https://github.com/okovtun/DynamicMemory2_34a
2. Âìåñòî ïåğåäà÷è ìàññèâà â ôóíêöèş ïî óêàçàòåëş, ñäåëàòü ïåğåäà÷ó ïî ññûëêå.
void push_row_back(int**& Arr, int& m, const int n);

*/

//ROWS
void FillRand(int** Arr, const int m, const int n);
void Print(int** Arr, const int m, const int n);
void Delete(int** Arr, const int m, const int n);

void PushRowBack(int **& Arr, int& m, int& n);
void PushRowFront(int **& Arr, int& m, int& n);
void InsertRow(int **& Arr, int& m, int& n, long long int& index);

void PopRowBack(int **& Arr, int& m, int& n);
void PopRowFront(int **& Arr, int& m, int& n);
void EraseRow(int **& Arr, int& m, int& n, long long int& index);

//COLS
void PushColBack(int** Arr, int& m, int& n);
void PushColFront(int** Arr, int& m, int& n);
void InsertCol(int** Arr, const int m, int& n, long long int& index);

void PopColBack(int** Arr, const int m, int& n);
void PopColFront(int** Arr, const int m, int& n);
void EraseCol(int** Arr, const int m, int& n, long long int& index);

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

	int m;		//Ñòğîêè
	int n;		//İëåìåíò ñòğîêè
	std::cout << "Ââåäèòå êîëè÷åñòâî ñòğîê: "; std::cin >> m;
	std::cout << "Ââåäèåò êîëè÷åñòâî ıëåìåíòîâ ñòğîê: "; std::cin >> n;
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
	// ÄÎÁÀÂËÅÍÈÅ ÏÓÑÒÎÉ ÑÒĞÎÊÈ Â ÊÎÍÅÖ ÄÄÌ
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
	//ÄÎÁÀÂËÅÍÈÅ ÏÓÑÒÎÉ ÑÒĞÎÊÈ Â ÍÀ×ÀËÎ ÄÄÌ
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
	//ÄÎÁÀÂËÅÍÈÅ ÏÓÑÒÎÉ ÑÒĞÎ×ÊÈ ÏÎ ÈÍÄÅÊÑÓ Â ÄÄÌ
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
	//ÓÄÀËÅÍÈÅ ÏÎÑËÅÄÍÅÉ ÑÒĞÎ×ÊÈ Â ÄÄÌ
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
	//ÓÄÀËÅÍÈÅ ÏÅĞÂÎÉ ÑÒĞÎ×ÊÈ Â ÄÄÌ
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
	//ÓÄÀËÅÍÈÅ ÑÒĞÎ×ÊÈ ÏÎ ÈÍÄÅÊÑÓ Â ÄÄÌ
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
	// ÄÎÁÀÂËÅÍÈÅ ÏÓÑÒÎÃÎ İËÅÌÅÍÒÀ ÑÒĞÎÊÈ Â ÊÎÍÅÖ ÄÄÌ

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
	// ÄÎÁÀÂËÅÍÈÅ ÏÓÑÒÎÃÎ İËÅÌÅÍÒÀ ÑÒĞÎÊÈ Â ÍÀ×ÀËÎ ÄÄÌ
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
	//ÄÎÁÀÂËÅÍÈÅ ÏÓÑÒÎÃÎ İËÅÌÅÍÒÀ ÑÒĞÎÊÈ ÏÎ ÓÊÀÇÀÍÎÌÓ ÈÍÄÅÊÑÓ Â ÄÄÌ
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Ââåäèòå ıëåìåíò ñòğîêè: "; std::cin >> index;
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
	//ÓÄÀËÅÍÈÅ ÏÎÑËÅÄÍÅÉ ÑÒĞÎÊÈ Â ÄÄÌ
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
	//ÓÄÀËÅÍÈÅ ÏÅĞÂÎÉ ÑÒĞÎÊÈ Â ÄÄÌ
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
	//ÓÄÀËÅÍÈÅ İËÅÌÅÍÒÀ ÑÒĞÎÊÈ ÏÎ ÈÍÄÅÊÑÓ 
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Ââåäèòå èíòåêñ: "; std::cin >> index;
	EraseCol(Arr, m, n, index);
	Print(Arr, m, n);
	std::cout << std::endl;

	Delete(Arr, m, n);
}

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

//ROWS
void PushRowBack(int **& Arr, int& m, int& n)
{
	int** Buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)
	{
		Buffer[i] = Arr[i];
	}
	delete[] Arr;
	Arr = Buffer;
	Arr[m] = new int[n] {};
	m++;
	//return *Arr;
}
void PushRowFront(int **& Arr, int& m, int& n)
{
	int** Buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)
	{
		Buffer[i + 1] = Arr[i];
	}
	delete[] Arr;
	Arr = Buffer;
	Arr[0] = new int[n] {};
	m++;
	//return *Arr;
}
void InsertRow(int **& Arr, int& m, int& n, long long int& index)
{
	std::cout << "Ââåäèòå èíäåêñ: "; std::cin >> index;
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

	//return Arr;
}

void PopRowBack(int **& Arr, int& m, int& n)
{
	int** Buffer = new int*[--m];
	for (int i = 0; i < m; i++)
	{
		Buffer[i] = Arr[i];
	}
	delete[] Arr;
	Arr = Buffer;
	//m--;
	//return Arr;
}
void PopRowFront(int **& Arr, int& m, int& n)
{
	int** Buffer = new int*[m - 1];
	for (int i = 0; i < m; i++)
	{
		Buffer[i] = Arr[i + 1];
	}
	delete[] Arr;
	Arr = Buffer;
	m--;
	//return Arr;
}
void EraseRow(int **& Arr, int& m, int& n, long long int& index)
{
	int** Buffer = new int*[m];
	std::cout << "Ââåäèòå èíäåêñ: "; std::cin >> index;
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
void PushColBack(int** Arr, int& m, int& n)
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
	//return Arr;
}
void PushColFront(int** Arr, int& m, int& n)
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
	//return Arr;
}
void InsertCol(int** Arr, const int m, int& n, long long int& index)
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
	//return Arr;
}

void PopColBack(int** Arr, const int m, int& n)
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
	//return Arr;
}
void PopColFront(int** Arr, const int m, int& n)
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
	//return Arr;
}
void EraseCol(int** Arr, const int m, int& n, long long int& index)
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
	//return Arr;
}