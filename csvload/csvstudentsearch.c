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
	//fp = fopen("C:\\Users\\KBCI\\Desktop\\ssif\\stifdt.txt", "r");
	//csv ���� �ҷ�����
	fp = fopen("C:\\Users\\KBCI\\Desktop\\ssif\\Seoul_list.csv", "r");
	
	//���� �� ����
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}

	//�л����� ���� �Է��ϱ�
	//for (int i = 0; i < 25; i++)
	//	fscanf(fp, "%s %s %s %s %s %d %s", &st[i].co, &st[i].name, &st[i].gen, &st[i].pnum, &st[i].em, &st[i].bd, &st[i].maj);

	//1�پ� �ޱ�
	char *str;
	
	while (1)
	{
		str = fgets(str, sizeof(str), fp);

		if (str == NULL)
			break;
	}
		
	//,���� ©�� �ޱ�
	char* ptr = strtok(str, ",");

	strcpy(Student.co, ptr);
	printf("%s\n", Student.co);
	ptr = strtok(NULL, ",");




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