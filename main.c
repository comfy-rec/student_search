#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "student.h"


int main(void)
{
	//�л��� �迭 ����
	Student st[25];
	//�˻���ȣ �����ϱ� ���� ����
	int option;
	//���� ������ ����
	FILE* fp;

	//���� �ҷ�����
	fp = fopen("C:\\Users\\KBCI\\Desktop\\ssif\\stifdt.txt","r");

	//���� �� ����
	if (fp == NULL) 
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}

	//�л����� ���� �Է��ϱ�
	for (int i = 0; i < 25; i++)
		fscanf(fp, "%s %s %s %s %s %d %s", &st[i].co, &st[i].name, &st[i].gen, &st[i].pnum, &st[i].em, &st[i].bd, &st[i].maj);

	//���� �ݱ�
	fclose(fp);

	//�˻� ��� �����ϱ�
	while (1) {

		screen();

		scanf_s("%d", &option);

		switch (option) {

		case 1:

			coscf(st, sizeof(st) / sizeof(Student));

			break;

		case 2:

			namescf(st, sizeof(st) / sizeof(Student));

			break;

		case 3:

			genscf(st, sizeof(st) / sizeof(Student));

			break;

		case 4:

			pnumscf(st, sizeof(st) / sizeof(Student));

			break;

		case 5:

			emscf(st, sizeof(st) / sizeof(Student));

			break;

		case 6:

			bdscf(st, sizeof(st) / sizeof(Student));

			break;

		case 7:

			majscf(st, sizeof(st) / sizeof(Student));

			break;
		default:

			break;

		}

		if (option == 8) {

			break;

		}

	}
	return 0;
}