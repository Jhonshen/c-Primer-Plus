#include <iostream>
#include "namesp.h"
using namespace SALES;
int main(int argc, char const *argv[])
{
    double ar[6] = {1,2,3,4,5,6};
    Sales s;
    setSales(s, ar, 3);
    showSales(s);
    setSales(s);
    showSales(s);
    return 0;
}
