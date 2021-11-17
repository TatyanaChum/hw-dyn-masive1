// hw dyn masive1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int SummElement(const int* array, size_t size)
{
	int summ = 0;

	for (size_t i = 0; i < size; i++)
	{
		summ += array[i];
	}
	return summ;
}
void PrintArr(const int* array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}
void RandArr(int* array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 10 + 1;
	}
}
int MultiplicationArr(int* array, size_t size)
{
	int multi = 1;
	for (size_t i = 0; i < size; i++)
	{
		multi *= array[i];
	}
	return multi;
}
int Maxarr(int* array, size_t size)
{
	int max = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
int Minarr(int* array, size_t size)
{
	int min = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}
int Srarifm(int* array, size_t size)
{
	int sum = 0;
	int k = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] > 0)
			k++;
		sum += array[i];
	}
	if (k)
	{
		sum /= k;
	}
	return k;
}
int IndexArray(const int* array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		int index = 0;
		if (array[i] == index)
		{
			index = i;
		}
		return i;
	}

}
int NumberArray(const int* array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		int number = 0;
		if (array[i] == number)
		{
			return number;
		}
		else
			return -1;
	}
	return -1;
}
void Selectionsort(int* array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		size_t minindex = i;
		int min = array[i];

		for (size_t j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				minindex = j;
			}
		}
		int tmp = array[i];
		array[i] = array[minindex];
		array[minindex] = tmp;
	}
}
void InsertArray( int** array, size_t size, size_t index, int value)
{
	int* copy = new int[size + 1];
	for (size_t i = 0; i < size; i++)

		copy[i] = (*array)[i];
	copy[index] = value;

	for (size_t i = index + 1; i <= size; i++)
		copy[i] = (*array)[i - 1];
	*array = copy;
}


int main()
{
	srand(time(NULL));
	int size;

	cout << "Enter size massive: ";
	cin >> size;

	int* array = new int[size];


	RandArr(array, size);
	PrintArr(array, size);
	cout << "Summa element: " << SummElement(array, size) << endl;
	cout << "Multiplication element: " << MultiplicationArr(array, size) << endl;
	cout << "Max element: " << Maxarr(array, size) << endl;
	cout << "Min element: " << Minarr(array, size) << endl;
	cout << "Sr arifm: " << Srarifm(array, size) << endl;
	cout << "Enter your number: " << endl;
	int number;
	cin >> number;
	cout << "Index number: " << IndexArray(array, size) << endl;
	int element;
	cout << "Enter your element: " << endl;
	cin >> element;
	cout << "Element: " << element << " " << NumberArray(array, size) << endl;
	cout << "Your array selection sort: " << Selectionsort(array, size) << endl;
	PrintArr(array, size);
	size_t index;
	size_t value;
	cout << "Enter index of insertion to array: ";
	cin >> index;
	cout << "Enter value of insert to array: ";
	cin >> value;
	
	cout << "your inserted array: ";
	InsertArray(&array, size, index, value);
	PrintArr(array, size + 1);
	
	delete[] array;
	

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
