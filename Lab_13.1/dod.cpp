#include "dod.h"
#include "var.h" // ��������� ������ ���������� ������
using namespace nsvar;
void nsDod::dod()
{
	a *= x * x * (2. * n - 1) / (2. * n + 1); // ������� ����������� ��
}