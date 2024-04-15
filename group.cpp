#include "group.h"
#include "Student.h"
#include <iostream>

void printGroup(Group g)
{
	printf("������: %s", g.name);
	for (int i = 0; i < g.size; i++)
	{
		printStudent(g.students[i]);
	}
	printf("\n");
}

void fillGroupByHand(Group& g)
{
	printf("������� �������� ������: ");
	do
		gets_s(g.name, 100);
	while (g.name[0] == '\n' || g.name[0] == '\0');
	printf("������� ������ ������: ");
	scanf_s("%i", &g.size);
	for (int i = 0; i < g.size; i++)
	{
		fillStudentByHand(g.students[i]);
	}
}