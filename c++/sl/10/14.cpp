#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){	
	char str1[50],str2[30],*p1,*p2;
	p1=str1;	//������ָ��ֱ�ָ����������
	p2=str2;
	cout << "please input string1:" << endl;
	gets(str1);
	cout << "please input string2:" << endl;
	gets(str2);
	while(*p1!='\0')
		p1++;	//��p1�ƶ���str1��ĩβ
	while(*p2!='\0')
		*p1++=*p2++;	//ȡp2ָ���ֵ��ֵ��p1ָ��ĵ�ַ(str1��ĩβ)��������str1��str2
	*p1='\0';
	cout << "the new string is:" << endl;
	puts(str1);
	return 1;
}