#define _CRT_SECURE_NO_DEPRECATE 1
#include<iostream>
#include<fstream>
#include<cstring>


using namespace std;
int main()
{
	ofstream write("test.txt");
	for (int i{}; i <= 57; i++)
	{
		write << "��" << i << "��ķ����ǣ�:\n";
	}
	write.close();

	ifstream read("test.txt");
	char nrong[80]{};

	//��һ�ַ���

	read.getline(nrong, 80);
	cout << nrong << endl;        //��������

	read.getline(nrong, 80);
	cout << nrong << endl;        //��������

	read >> nrong;
	cout << nrong << endl;        //��������

	read.getline(nrong, 80);
	cout << nrong << endl;        //����ʧ��

	read >> nrong;
	cout << nrong << endl;        //��������


	//�ڶ��ַ���
	string str{};
	str=read.get();
	cout << str << endl;        //ִ��ʧ��




	return 0;
}