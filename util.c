#include "util.h"

//max, min
/*
//max�� min�� �����Ѵ�
*/
int MAX(int a, int b) {
	if (a >= b) return a;
	return b;
}

//a�� b�� �� ���� ���� ��ȯ
int MIN(int a, int b) {
	if (a <= b) return a;
	return b;
}

//input, get
/*
//string�� �Է¹޴� �Լ�. ���ڿ��� ����('\0' ������)�� return �Ѵ�.
//�Է¹޴� ���� ������ ���, -1�� return �Ѵ�.
//length�� constants.h�� STRING_LENGTH ��� ����������, STRING_LENGTH ������ �ٸ� ���ڸ� �Է��� ���� �ִ�.
//�ִ밪�� STRING_LENGTH�̴�
//string�� �Է¹��� ���ڿ��� ����� �ּ�, length�� '\0'�� ������ string�� �����̴�
*/
int get_string(char* string, int length) {
	char ret[STRING_LENGTH] = { '\0', }; //�Է¹��� ���ڿ��� ����Ǵ� �ӽ� �����
	char temp = '0'; //�ӽ÷� �Է¹��� ���� ����
	int nowlength = 0; //min(length, STRING_LENGTH);
	int i = 0, j = 0; //�������� ���� ��
	int flag = 0; //������ �߻� ���θ� �����ϴ� ����

	nowlength = MIN(length, STRING_LENGTH);

	for (i = 0; i < nowlength; i++) {
		scanf("%c", &temp);

		if (temp == '\n' || temp == '\0') {
			//���� Ȥ�� NULL���ڰ� ������ ��� NULL���ڸ� �����ϰ� break�ϵ��� �Ѵ�.
			ret[i] = '\0';
			break;
		}
		
		if (i == nowlength - 1) {
			//���� Ȥ�� NULL���ڰ� �ƴϾ����� �Է��� ������ �����̴�
			flag = 1; //-1�� return�ؾ� �ϹǷ� flag = 1;
			i = 0; //���۸� ���� ���� ������ ������ ������ �Ѵ�
		}

		if (!flag) {
			//ret[i]�� temp �� ����
			ret[i] = temp;
		}
	}

	if (flag) { //������ �ʰ��� ���
		printf("�Է� ������ �ʰ��Ͽ����ϴ�.\n");
		return -1;
	}
	for (j = 0; j <= i; j++) {
		string[j] = ret[j];
	}

	return i; //for������ n��°���� �����̰�(n - 1��° ����), n + 1��°(n��°)�� '\n'�� ���, i = n�� ���¿��� break;�Ǿ��� ���̴�
}

/*
//����� ������ �Է¹޴� �Լ�
//int�� ���� �� �����ŭ �Է¹��� �� �ִ�(0 ~ 2^31 - 1)
//�Է¿� �����ϸ� -1�� �����Ѵ�
//char�� 1���� scanf�Ͽ� ���� ������ �ذ��� �� �ִ�.
*/
int get_unsigned_int() {
	char temp = '0'; //�ӽ÷� �Է¹��� ���� ����
	int ret = 0; //���ϵ� ����
	int i = 0; //�������� ���� ��
	int flag = 0; //int������ �Ѿ�ų�, 0~9�� ���ڰ� �ԷµǾ����� 1�� �ȴ�.

	for (i = 0; i < 11; i++) {
		scanf("%c", &temp);
		if (temp == '\n' || temp == '\0') {
			//���Ͱ� ������ �Է� ��
			//null���ڰ� ������ ��쵵 ������ ���Ҵ�...?
			break;
		}

		if (i == 10) {
			//11��° �Է�������, '\n'�� �ƴϾ���.
			//11��°�� �Է��� ���ڶ�� �ϴ��� int�� ������ �Ѿ��
			flag = 1; //�׷��� -1�� �����ؾ� �Ѵ� -> flag = 1
			i = 0; //i�� 0���� ����, for������ ���� buffer�� ���� ����
		}

		/*
		//flag == 1�̶��, �̹� ���� ���� return�ؾ� �ϴ� ��Ȳ�̴�.
		//temp���� ó���ϴ� ������ ���ǹ��ϴ�.
		//if(flag) continue; �� �־ ������, continue�� �� �������� �� �����Ͻñ⿡,
		//if �� �տ� !flag &&�� �߰��ϵ��� �Ѵ�.
		*/

		if (!flag && '0' <= temp && temp <= '9') {
			ret *= 10;
			ret += (temp - '0');
			//overflow�� �߻��ϴ� �� Ȯ���ϴ� ������ �ʿ��ϴ�
		}
		else {
			//'\n'��, '\0'��, 0~9�� ���ڵ� �ƴ� ���
			flag = 1;
		}
	}

	if (flag) {
		printf("�ùٸ� ������ �Է��� �ּ���.\n"); //���� �޽��� ���(�ʿ信 ���� �����ؾ��� �� ����)
		return -1; //������ �߻������� -1 return
	}
	return ret; //����� �ԷµǾ����� 1 return
}

// sorting
//�ѱ��� �����ϴ� �Լ�, �л� ���� �� �⼮�ο� ���� �� �̿��� ����
int hangeul_sort() {

}

//gotoxy
void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


int sshow() {
	printf("aaa\n");
	return 1;
}