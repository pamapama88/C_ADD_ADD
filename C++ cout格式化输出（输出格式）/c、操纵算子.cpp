#define _CRT_SECURE_NO_DEPRECATE 1
#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	float f = 2.0 / 3.0, f1 = 0.000000001, f2 = -9.9;
	cout << f << ' ' << f1 << ' ' << f2 << endl; //������� 
	cout << setiosflags(ios::showpos); //ǿ��������ǰ��+�� 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::showpos); //ȡ������ǰ��+�� 
	cout << setiosflags(ios::showpoint); //ǿ����ʾС��������Ч0 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::showpoint); //ȡ����ʾС��������Ч0 
	cout << setiosflags(ios::scientific); //��ѧ������ 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::scientific); //ȡ����ѧ������ 
	cout << setiosflags(ios::fixed); //���������ʾ 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::fixed); //ȡ�����������ʾ 
	cout << setprecision(18); //����Ϊ18������Ϊ6 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << setprecision(6); //���Ȼָ�Ϊ6 
	return 0;
}
