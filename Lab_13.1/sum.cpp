#include <math.h>
#include<cmath>
#include "dod.h"
#include "sum.h"
#include "var.h" // ��������� ������ ���������� ������
using namespace nsDod;
using namespace nsvar;
void nsSum::sum()
{

		n = 0;
		a = x;
		S = a;
		do 
		{
			n++;
			dod();
			S += a;
		} while (abs(a) > eps);
}