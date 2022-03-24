#include "table.h"

double is_year_leap(int x)
{
	bool p = false;
	for (int i = 1968; i <= 2132; i += 4)
	{
		if (x == i)
		{
			p = true;;
			break;
		}
	}

	if (p) return 366.0;
	else return 365.0;

};
double days(int a, int b)
{
	switch (a)
	{
	case 1:
		return 31.0;
		break;
	case 2:
		if (is_year_leap(b) == 366.0) return 29.0;
		else return 28.0;
		break;
	case 3:
		return 31.0;
		break;
	case 4:
		return 30.0;
		break;
	case 5:
		return 31.0;
		break;
	case 6:
		return 30.0;
		break;
	case 7:
		return 31.0;
		break;
	case 8:
		return 31.0;
		break;
	case 9:
		return 30.0;
		break;
	case 10:
		return 31.0;
		break;
	case 11:
		return 30.0;
		break;
	case 12:
		return 31.0;
		break;
	}
}

double c_days(int u, int y, int h)
{
	double f = 0;
	switch (u)
	{
	case 0:
		return days(y, h);
		break;
	case 1:
		for (int i = 0; i < 3; i++)
		{
			if (y+i <= 12)
			{
				f += days(y + i, h);
			}
			else
			{
				y = 1;
				h++;
				f += days(y, h);
			}
		}
		return f;
		break;
	case 2:
		for (int i = 0; i < 12; i++)
		{
			if (y+i <= 12)
			{
				f += days(y + i, h);
			}
			else
			{
				int k = 0;
				y = 1;
				h++;
				while (k+i != 12)
				{
					f += days(y+k, h);
					k++;
				}
				i = 12;
			}
		}
		return f;
		break;
	}
}

double perio_d(int f)
{
	switch (f)
	{
	case 0:
		return 12;
		break;
	case 1:
		return 4;
		break;
	case 2:
		return 1;
		break;
	}
}

int type_currency(int f)
{
	switch (f)
	{
	case 0:
		return 'a';
		break;
	case 1:
		return '$';
		break;
	case 2:
		return '€';
		break;
	}
}