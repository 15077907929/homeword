#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){	
	char str1[30],str2[20];
	int i=0;
	cout << "����������1��" << endl;
	gets(str1);
	cout << "����������2��" << endl;
	gets(str2);
	i=strcmp(str1,str2);	//�Ƚ������ַ����Ĵ�С(ASCII��ֵ�Ĵ�С)
	if(i>0)
		cout << "str1>str2" << endl;	//�������������str1>str2
	else if(i<0)
		cout << "str1<str2" << endl;	//���ظ��������str1<str2
	else
		cout << "str1=str2" << endl;	//����0�����
	return 1;
}