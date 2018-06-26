#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		int n;
		cin >> n;
		double x = 1;

		for (int i = 1; i <= n; i++)
		{
			x = x*(1 + 1.0 / (pow(n, 2))); //т.к. не целочисленное деление нужно указывать тип дабл и в самом примере писать 1.0 а не просто 1!!!!!!!!!!!!!!!!!! поу всегда дабл
		}
		cout << x << endl;
	}
	break;
	case 2:
	{
		int n;
		cin >> n;
		double sum = 0;
		double x = 0;
		for(double i = 1; i <= n; i++)
		{
			x = x + sin(i);
			sum = sum + 1 / x;
		}
		cout << sum << endl;
	}
	break;
	case 3:
	{
		int n;
		cin >> n;
		double sum = sqrt(2);
		for (int i = 1; i < n; i++)
		{
			sum = sqrt(sum + 2.0);
		}
		cout << sum << endl;
	}
	break;
	case 4:
	{
		int n;
		cin >> n;
		double sum1 = 0;
		double sum2 = 0;
		double p = 1.0;

		for (double i = 1; i <= n; i++) //again DOUBLE!!!!!!!!!!!!!!!
		{
			sum1 = sum1 + cos(i);
			sum2 = sum2 + sin(i);
			p = p*(sum1 / sum2);
		}
		cout << p << endl;
	}
	break;
	case 5:
	{
		int n;
		cin >> n;
		double sum = 0;
		for (int i = n; i >0; i--)
		{
			sum = sqrt(3 *i + sum);
		}
		cout << sum << endl;
	}
	break;
	case 6:
	{
		int n;
		cin >> n;
		int i = 0;
		while (n != 0)
		{
			n = n / 10;
			i++;
		}
		cout << i << endl;
	}
	break;
	case 7:
	{

	}
	break;
	case 8:
	{

	}
	break;
	case 9:
	{

	}
	break;
	case 10:
	{

	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}