#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){	
	char str1[30],str2[20];
	cout << "����������1" << endl;	//��str1��ֵ
	cin >> str1;	
	cout << "����������2" << endl;	//��str2��ֵ
	cin >> str2;
	if(30>strlen(str1)+strlen(str2)){	//�ж������ַ�������֮���Ƿ񳬹�30
		strcat(str1,str2);	//����str1��str2
		cout << "Now the string1 is:" << str1 << endl;
	}else{
		cout << "����ʧ��" << endl;
	}
	return 1;
}