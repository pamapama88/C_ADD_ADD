#define _CRT_SECURE_NO_DEPRECATE 1
#include<iostream>
#include<fstream>
#include<cstring>

int main1()
{
	char cccin{};
	char chin[80]{ "abcdefgh" };
	std::string  stin{ "abcdefgh" };
	std::ofstream a_outfile;
	std::ifstream a_infile;
	a_outfile.open("test.txt");      //������ֵ��ı��ļ���
	a_infile.open("test.txt");       //���ı��ļ��л�ȡ����
	for (int i{}; i <= 57; i++)
	{
		a_outfile << "��" << i << "��ķ����ǣ�\n";
	}
	a_infile.getline(chin, 80);
	//std::cin.getline(a_infile,chin);
	for (int i{}; i <= 57; i++)
	{
		//a_infile >> chin;
		//a_infile >> stin;
		//a_infile >> cccin;
		//a_infile.getline(chin, 80);

		std::cout << chin << std::endl;
		//std::cout << stin;
		//std::cout << cccin;
	}


	return 0;
}