#define _CRT_SECURE_NO_DEPRECATE 1
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double y = 19.0123456789;
	int x = 65;

	cout.fill('0');       //������䷽ʽΪ0��
	cout << setw(5) << x << endl;//�������λ��Ϊ5���Ҷ��롣

	cout.setf(ios::left); //���ö��뷽ʽΪleft 
	cout.width(7); //���ÿ��Ϊ7�������ÿո���� 
	cout << "1.1" << endl;

	cout.unsetf(ios::left); //ȡ�����뷽ʽ����ȱʡright��ʽ 
	cout.fill('.'); //������䷽ʽ 
	cout.width(30); //���ÿ�ȣ�ֻ������������� 
	cout << 1 << endl;

	cout << setiosflags(ios::left) << setw(7); //���ÿ��Ϊ7��left���뷽ʽ 
	cout << 1.1 << endl;

	cout << resetiosflags(ios::left); //ȡ�����뷽ʽ 
	cout << setfill('.') << setw(30) << 1 << endl; //���Ϊ30�����Ϊ'.'��� 

	cout << y << setprecision(4) << endl;//�����������

	return 0;
}
