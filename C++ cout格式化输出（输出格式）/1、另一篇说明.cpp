#define _CRT_SECURE_NO_DEPRECATE 1
#include <iostream>
using namespace std;
int main()
{
	cout << "��һ��" << endl;
	cout << " ";
	cout.setf(ios::left); //���ö��뷽ʽΪleft 
	cout.width(7); //���ÿ��Ϊ7�������ÿո���� 
	cout << "1.1";
	cout << "ʲô��C����";
	cout.unsetf(ios::left); //ȡ�����뷽ʽ����ȱʡright��ʽ 
	cout.fill('.'); //������䷽ʽ 
	cout.width(30); //���ÿ�ȣ�ֻ������������� 
	cout << 1 << endl;
	cout << " ";
	cout.width(7); //���ÿ�� 
	cout.setf(ios::left); //���ö��뷽ʽΪleft 
	cout.fill(' '); //������䣬ȱʡΪ�ո� 
	cout << "1.11";
	cout << "C���Ե���ʷ";
	cout.unsetf(ios::left); //ȡ�����뷽ʽ 
	cout.fill('.');
	cout.width(30);
	cout << 58 << endl;
	cout.fill(' ');
	cout << "�ڶ���" << endl;
	return 0;
}
//���Ƕ�������˿�ȣ�Ϊ����ʹ���ǵļ����һ�£�Ҳʹ���˶��뷽ʽ��Ϊ����ʹ���ǵ������ܶ�����ʾ�����������ۡ����ǻ�ʹ������䷽ʽ��
//���������ò���������ʵ��Ҳ�ǿ��Եġ�

#include <iostream>
#include <iomanip> 
int main()
{
	cout << "��һ��" << endl;
	cout << " ";
	cout << setiosflags(ios::left) << setw(7); //���ÿ��Ϊ7��left���뷽ʽ 
	cout << "1.1";
	cout << "ʲô��C����";
	cout << resetiosflags(ios::left); //ȡ�����뷽ʽ 
	cout << setfill('.') << setw(30) << 1 << endl; //���Ϊ30�����Ϊ'.'��� 
	cout << setfill(' '); //�ָ����Ϊ�ո� 
	cout << " ";
	cout << setw(7) << setiosflags(ios::left); //���ÿ��Ϊ7��left���뷽ʽ 
	cout << "1.11";
	cout << "C���Ե���ʷ";
	cout << resetiosflags(ios::left); //ȡ�����뷽ʽ 
	cout << setfill('.') << setw(30) << 58 << endl; //���Ϊ30�����Ϊ'.'��� 
	cout << setfill(' ') << "�ڶ���" << endl;
	return 0;
}
//���������ͬ����Ч�����������ҵ��Ը��Ҹ�ϲ���ò������������и�ʽ�������������ǿ����������ĸ�ʽ�������������

/*���ڸ������ĸ�ʽ */

#include <iostream.h> 
void main()
{
	float f = 2.0 / 3.0, f1 = 0.000000001, f2 = -9.9;
	cout << f << ' ' << f1 << ' ' << f2 << endl; //������� 
	cout.setf(ios::showpos); //ǿ��������ǰ��+�� 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::showpos); //ȡ������ǰ��+�� 
	cout.setf(ios::showpoint); //ǿ����ʾС��������Ч0 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::showpoint); //ȡ����ʾС��������Ч0 
	cout.setf(ios::scientific); //��ѧ������ 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::scientific); //ȡ����ѧ������ 
	cout.setf(ios::fixed); //���������ʾ 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::fixed); //ȡ�����������ʾ 
	cout.precision(18); //����Ϊ18������Ϊ6 
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.precision(6); //���Ȼָ�Ϊ6 
}
//ͬ��������Ҳһ�����ò�������ʵ��ͬ���Ĺ��ܣ�

/* ���ڸ������ĸ�ʽ */

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