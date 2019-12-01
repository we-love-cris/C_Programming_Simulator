#pragma once

//�⺻ ���̺귯�� �� �����, ����ü include
#include "declare.h"

/*
//util.h �� ���� ����� ��� �ִ� �����
//�ַ� �ڵ带 �Ƴ��ų� �˰����� ������ ��
*/


//max, min
/*
//max�� min�� �����Ѵ�
*/
int MAX(int a, int b);
int MIN(int a, int b);


//input, get
/*
//���ڿ��� �Է¹޴� �Լ�. constants.h�� STRING_LENGTH - 1��ŭ ���� �� �ִ�.
//�Է¿� �����ϸ� ���ڿ��� ����('\0'������)��, �����ϸ� -1�� �����Ѵ�.
//string�� ���ڿ��� ����� ���� �ּ�, length�� �Է¹��� �ִ� �����̴�('\0' ����).
//length�� ����� ��Ȳ������ STRING_LENGTH�� �Է��ϴ� ������ �����ϳ�,
//STRING_LENGTH ������ ������ �Է��� �ִ� ��쵵 ó���Ѵ�. ��, STRING_LENGTH�� length�� �ִ� ���̴�
//int a = -1;
//while(a == -1) {
//	//optional printf("�Է��� ���ڿ��� �Է��Ͻÿ� : ");
//	a = get_string(...);
//}
//�̿� ���� ������� ����ϸ� �ùٸ� ����� �� �� �ִ�.
*/
int get_string(char* string, int length);

/*
//����� ������ 0�� �Է¹޴� �Լ�. int�� ���� �����ǹ��� ��ŭ �Է¹��� �� �ִ�
//�Է¿� �����ϸ� -1�� �����Ѵ�.
//int a = -1;
//while(a == -1) {
//	//optional printf("�Է��� ������ �Է��Ͻÿ� : ");
//	a = get_unsigned_int();
//}
//�̿� ���� ������� ����ϸ� �ùٸ� ����� �� �� �ִ�.
*/
int get_unsigned_int();




// sorting
int hangeul_sort(); //�ѱ��� �����ϴ� �Լ�, �л� ���� �� �⼮�ο� ���� �� �̿��� ����


//gotoxy
void gotoxy(int x, int y);

int sshow();