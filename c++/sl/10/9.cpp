#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){	
	int i,a[10];
	int *p;
	for(i=0;i<10;i++)
		a[i]=i;	//����ѭ�����ֱ�Ϊ10��Ԫ�ظ�ֵ
	p=&a[0];	//��ָ��pָ������a�ĵ�0��Ԫ�صĵ�ַ
	for(i=0;i<10;i++,p++)	//�������е�10��Ԫ���������ʾ�豸
		cout << *p << endl;	//���pָ��ĵ�ַ�е�ֵ
	return 1;
}