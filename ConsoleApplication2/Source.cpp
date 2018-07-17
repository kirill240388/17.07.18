#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <iomanip>
using namespace std;
int main()
{
	int task;
	cin >> task;
	srand(time(NULL));
	if (task == 1)
	{

		const int n = 8;
		const int m = 6;
		int a[n][m];
		int b[n];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				a[i][j] = rand() % 21;
				cout << a[i][j] << " ";

			}
			cout << endl;
		}
		int max = INT_MIN;//минимальное значение чисел int
		for (int i = 0; i < n; i++)
		{
			max = INT_MIN;
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] > max)
					max = a[i][j];
			}
			b[i] = max;//записывает макс. значения в массив b[i]
		}


		cout << endl << endl;
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}


		for (int pass = 0; pass < n - 1; pass++)// сортировка
		{
			for (int k = 0; k < n - 1; k++)
			{
				if (b[k] > b[k + 1])
				{
					swap(b[k], b[k + 1]);
					for (int i = 0; i < m; i++)
						swap(a[k][i], a[k + 1][i]);
				}

			}
		}
		cout << endl << endl;
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";//вывод отсортированных макс. значений b[i]
		}

		cout << "Result matrix:" << endl << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << setw(5) << a[i][j];//setw Задает ширину отображения поля для следующего элемента в потоке

			}
			cout << endl;
		}



	}
	if (task == 2)
	{

		const int n = 10;
		const int m = 10;
		int mas[n][m];
		int a, b, c, d, sum;
		a = 0;
		sum = 0;
		bool e_f=true;
		int e_count=0;
		int option;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				mas[i][j] = 5 + rand() % 11;
				cout <<setw(3) << mas[i][j] << " ";
				sum++;
			}
			cout << endl;
		}
		for (int i = 0; i < n; i++)
		{

			/*for (int j = 0; j < m; j++)
			{
				if (mas[i][j] > 7 && mas[i][j] < 10)
				{
					a++;
					
				}
			}*/
			while (true)
			{
				cout << "1-Excellent" << endl;
				cout << "2-Good" << endl;
				cout << "3-output by student" << endl;
				cout << "0-for exit" << endl;
				cin >> option;
				switch(option)
					case 1:
				{for (int i = 0; i < n; i++)
					bool e_f = true;
					for (int j = 0; j < m; j++)
					{
						if (mas[i][j] < 10)
						{
							e_f = false;
							break;
						}
						if (e_f)
						{
							e_count++;

						}
					}
				cout << e_count * 100 / n << endl;
				}
				/*break; 
					case 2:
						break;
					case 3:
						break;*/
			}

		}
		cout << "kolichestvo horoshistov: " << a << " Procent horoshistov: " << a / sum * 100 << endl;
	}

}
