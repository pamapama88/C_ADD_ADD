#define _CRT_SECURE_NO_DEPRECATE 1
#include<iostream>
int main()
{
	using namespace std;
	cout << "This is my frist try to write a c++ programe!" << endl;
	int My_salary{};
	cin >> My_salary;
	cout << "i'll get " << My_salary << " yuan per year!" << endl;


	//��ʵ���ǵ����µ�һ������ 

		// ����� ��̬����
	int size;
	cin >> size;
	int* p = new int [size];
	delete [] p;
		//ĿǰΪֹ���Ҿ�������һ����ȫ��ȷ�ҷ���Ķ�̬������̣���ʵ�����ſα����ġ�ʥ�� P91����

		//My_test
	char wenzi[20] = "zheshiyigezifuchuan";
	cout<<"�������\"wenzi\"�Ľ����" << wenzi << endl;
	char* p_wenzi = &wenzi[0];
	cout << "�������\"wenzi[0]\"�ĵ�ַp_wenzi�Ľ��:" << p_wenzi << endl;
		//�����������ͬ�ģ�˵��p_wenzi��wenzi���ǽ���һ��Ԫ�����֮��cout������������ֱ������ \0 Ϊֹ��





	return 0;
}