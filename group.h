#pragma once
#include "Student.h"

struct Group
{
	char name[100];
	Student students[100];
	int size = 0;
};

void printGroup(Group g);

void fillGroupByHand(Group& g);
