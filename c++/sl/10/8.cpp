#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){	
	char str1[30],str2[30],str3[30],temp[30];
	cout << "��ʹ��scanf��cin����Hello World!!" << endl;
	scanf("%s",str1);
	cin >> str2;
	cout << "str1:";
	printf("%s\n",str1);
	cout << "str2:";
	cout << str2 << endl;
	cout << "�������в�����cin���µĿո����ʹ��gets��������" << endl;
	gets(temp);	//��temp��ֵ
	cout << "temp:" << temp << endl;
	cout << "��ʹ��gets����Hello World!!" << endl;
	gets(str3);	//��str3��ֵ
	cout << "str3:";
	puts(str3);
	return 1;
}