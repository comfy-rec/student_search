#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "student.h"

#define LINE_PRN printf("------------------------------------------------------\n")

//�Լ� ����
void screen() {
	LINE_PRN;
	printf("%d. ������� �˻�\n", 1);
	printf("%d. �̸����� �˻�\n", 2);
	printf("%d. ������ �˻�\n", 3);
	printf("%d. ����ó�� �˻�\n", 4);
	printf("%d. �̸��Ϸ� �˻�\n", 5);
	printf("%d. ������Ϸ� �˻�\n", 6);
	printf("%d. �������� �˻�\n", 7);
	printf("%d. ����\n",8);
	LINE_PRN;
}

void coscf(Student s[], int size) {
	//Student *p = s;
	char tmp[20];
	printf("����� �Է��ϼ��� : ");
	scanf("%s", tmp);
	for (int i =0; i<size; i++) {
		if (strcmp(s[i].co, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
	/*for (p = s; p != NULL; p++) {
		if (strcmp(p->co, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", p->co, p->name, p->gen, p->pnum, p->em, p->bd, p->maj);
		}
	}*/
}

void namescf(Student s[], int size) {
	char tmp[20];
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", tmp);
	for (int i = 0; i < size; i++) {
		if (strcmp(s[i].name, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

void genscf(Student s[], int size) {
	char tmp[20];
	printf("������ �Է��ϼ��� : ");
	scanf("%s", tmp);
	for (int i = 0; i < size; i++) {
		if (strcmp(s[i].gen, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

void pnumscf(Student s[], int size) {
	char tmp[20];
	printf("����ó�� �Է��ϼ��� : ");
	scanf("%s", tmp);
	for (int i = 0; i < size; i++) {
		if (strcmp(s[i].pnum, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

void emscf(Student s[], int size) {
	char tmp[80];
	printf("�̸����� �Է��ϼ��� : ");
	scanf("%s", tmp);
	for (int i = 0; i < size; i++) {
		if (strcmp(s[i].em, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

void bdscf(Student s[], int size) {
	int tmp;
	printf("��������� �Է��ϼ��� : ");
	scanf("%d", &tmp);
	for (int i = 0; i < size; i++) {
		if (s[i].bd == tmp) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

void majscf(Student s[], int size) {
	char tmp[80];
	printf("������ �Է��ϼ��� : ");
	scanf("%s", tmp);
	for (int i = 0; i < size; i++) {
		if (strcmp(s[i].maj, tmp) == 0) {
			printf("%s %s %s %s %s %d %s\n", s[i].co, s[i].name, s[i].gen, s[i].pnum, s[i].em, s[i].bd, s[i].maj);
		}
	}
}

