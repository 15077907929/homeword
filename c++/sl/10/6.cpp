#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){	
	char str1[30],str2[20]={'n','o','n','e','\0'};
	cout << "����������1��" << endl;
	scanf("%s",str1);	//��str1��ֵ
	strcpy(str1,str2);	//��str2��ֵ���Ƶ�str1
	cout << "����1�����ݣ�" << endl;
	printf("%s",str1);	//���str1��ֵ
	return 1;
}