//ͻ����������

#include <iostream>
#include <cstdlib>
#include<ctime>
#include<Windows.h>
using namespace std;

const int speece = 50;

int main1()
{
	unsigned seed;                      //���㷨��Ҫһ����ʼֵ����Ϊ���ӣ����������֡����û�и���һ�����ӣ���ô������ÿ������ʱ������ͬ����������
	seed = time(0);        //time �������ش� 1970 �� 1 �� 1 ����ҹ��ʼ��������ȥ�����������ÿ�����г���ʱ���������ṩ��ͬ������ֵ.��ע�⣬�ڵ�����ʱ�����������һ������ 0��
	srand(seed);                         //Ҫ��ÿ�����г���ʱ��ò�ͬ������������������Ϊ������������ṩһ�������Կ�ʼ���� C++ �У�����ͨ������ srand ������ɵġ�
											//�� rand ������֮ǰ��srand ����Ҫ�ȱ����ã����� srand �����������н�������һ�Ρ�
	int i = rand() % 100 + 1;           //���������С���� 1 �� 100 ֮��
		
	
	int x = 0;
	while (1)
	{

		int i = rand() % 100 + 1;      
		if (i < 20)
		{
			cout << "1";
			cout << "   ";
		}
		else if (i > 80)
		{
			cout << "0";
			cout << "   ";
		}
		else
		{
			cout << "  ";
		}
		if (x % speece == 0)
		{
			Sleep(25);
		}
		if (x == 4000)
		{
			x = 0;
		}
		x++;

	}
	return 0;
}