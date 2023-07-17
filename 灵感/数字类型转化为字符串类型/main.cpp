#include<iostream>

double flt_is(double all);           
int wei_shu(int a);
std::string turn_int_into_char(int a);
std::string turn_flt_into_char(double a);


int wei_shu(int a)           //����һ�������м�λ�ĺ���
{
	if (a == 0)
	{
		return 1;
	}
	int ws = 0;
	int b = a;
	while (b)
	{
		b /= 10;
		ws++;
	}
	return ws;

}



std::string turn_int_into_char(int a)              //��һ������ת��Ϊstring�ַ����ĺ���     ��  �����Ҫchar* �� ����Ҫ�� .c_str() ��������ת��
{
	int ws = wei_shu(a);
	int* one_num = new int[ws];
	std::string the_char_int{};
	std::string a_num{};
	for (int i = 0; i < ws; i++)
	{
		one_num[ws - i - 1] = a % 10;
		a /= 10;
	}
	for (int i = 0; i < ws; i++)
	{
		the_char_int += ('0' + one_num[i]);
	}
	delete[ws] one_num;
	
	return the_char_int;
}



std::string turn_flt_into_char(double a)              //��һ��������ת��Ϊ�ַ�����������Ϊdouble�ľ���̫�������ˣ�����ֻ����float�����������ֻ�а�λС��
{
	std::string char_int = turn_int_into_char(int(a));

	// ��������������������ֵ�ת������

	//�������������С�����ֵ�ת������
	float a_flt = flt_is(a);              //���������С��������ȡ������������ //��ౣ��С�����8λС������Ϊdouble �ľ���̫�������ˣ�����Ҫ�� float )

	if (a_flt)                        //�����С������ô�Ϳ�ʼ���������С��ת����������������ת�����ַ�������
	{
		while (flt_is(a_flt))
		{
			a_flt *= 10;
		}

	}
	std::string char_flt = turn_int_into_char(a_flt);

	return char_int + "." + char_flt;
}




double flt_is(double all)            //����һ�������͵�С�����֣����û��С������ô�ͷ��� 0
{
	all *= 1000;
	all /= 1000;
	int int_a = all;
	double rtn_flt = all - int_a;
	std::cout << rtn_flt << std::endl;
	return rtn_flt;
}


int main()
{

	std::string ch_test = turn_flt_into_char(3.1415123456).c_str();        
	std::cout << ch_test << std::endl;

	return 0;
}