/// AES_experiment_01.cpp : �������̨Ӧ�ó������ڵ㡣
/// author:syl
/// email :jxjgssylsg@126.com    
///
#include "stdafx.h"

#include "Rijndael.h"
#include <iostream>

using namespace std;
void main()
{
	//string encryt(string content);
	//string decryt(string content);
	try
	{ 
		string Data="��!@��������������SADFţ��SFDS�����ڣ�!@#$%^&*(),.,.����������������124-=ASFSСѧӢ����꼶�ϲ�SDFASDF";
		//����ģ��
        string encrpt_re =encryt(Data);//����
		cout<<"���ܽ��  :"<<encrpt_re<<endl;
		//����ģ��
        string decrpt_de=decryt(encrpt_re);//����
		cout<<"���ܽ��  :"<<decrpt_de<<endl;
		system("pause");
	}catch(exception& roException)
	{
		cout << roException.what() << "��������_"<<endl;
	}
}
	

