#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
vector<int> find_gap(int gap, int a, int b)
{
	vector<int> find(2, 0);
	int numPrimos = 0;
	int lastprimo = 0;
	int lastgap = 0;
	int noesprimo = 0;
	int gapfind = 0;
	for (int i = a; i <= b; ++i)
	{
		int num = i;
		noesprimo = 0;
		
		for (int j = 2; j < num; j++)
		{
			if (num % j == 0) // verifica si es primo
			{
				noesprimo = 1; // no es primo
				j = num;
			}
		}
		if((gapfind==gap-1) && lastgap==gapfind && noesprimo==0)
		{
			find[1]=num;
			return find;
		}
		if (noesprimo && numPrimos!=0)
		{
			gapfind++;
			lastgap = gapfind;
			
		}
		
		if (noesprimo == 0) //es primo
		{
			find[0]=num;
			if (numPrimos == 0)numPrimos++;
			gapfind = 0;
			lastgap = 0;
		}
		

	}
	find[0]=0;
	find[1]=0;
	return find;
}

int main()
{
	vector<int> x;
	x = find_gap(10, 2, 200);
	int y = x.size();
	cout << "el array es: " << y << endl;

	for (int i = 0; i < 2; i++)
	{
		cout << "el valor del elemento " << i;
		cout << "  es:  " << x[i] << endl;
	}
}
