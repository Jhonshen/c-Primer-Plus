#include <iostream>
#include "namesp.h"
using namespace std;
namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
    	double sum;
    	double max = 0;
    	double min = 9999;
        for (int i = 0; i < n; i++)
        {
        	s.sales[i] = ar[i];
        	sum += ar[i];
            max = max < s.sales[i] ? s.sales[i] : max;
            min = min < s.sales[i] ? min : s.sales[i];
		}
        for (int i = n; i < QUARTERS; i++)
        	s.sales[i] = 0;
        s.average = sum / n;
        s.max = max;
        s.min = min;
    }
    void setSales(Sales & s)
    {
    	double sum;
    	double max = 0;
    	double min = 9999;
        for (int i = 0; i < QUARTERS; i++)
        {
            cin >> s.sales[i];
            sum += s.sales[i];
            max = max < s.sales[i] ? s.sales[i] : max;
            min = min < s.sales[i] ? min : s.sales[i];
        }

        s.average = sum / QUARTERS;
		s.max = max;
		s.min = min;
    }
    void showSales(const Sales & s)
    {
        for (int i = 0; i < QUARTERS; i++)
        {
        	cout << s.sales[i] << endl;
		}
        cout << "average" << s.average << endl;
        cout << "max" << s.max << endl;
        cout << "min" << s.min << endl;    
    }
}
