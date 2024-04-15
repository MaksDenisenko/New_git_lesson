#include "Student.h"
#include <iostream>

double getAvergeMark(Student s)
{
    double av = 0;
    for (int i = 0; i < s.marks_count; i++)
    {
        av += s.marks[i];
    }
    av /= s.marks_count;
    return av;
}

void fillStudentByHand(Student& s)
{
    printf("Введите имя: ");
    do
        gets_s(s.name, 100);
    while (s.name[0] == '\n' || s.name[0] == '\0');
    printf("Введите возраст: ");
    scanf_s("%i", &s.age);
    printf("Введите количество оценок: ");
    scanf_s("%i", &s.marks_count);

    for (int i = 0; i < s.marks_count; i++)
    {
        printf("Введите оценку №%i: ", i + 1);
        scanf_s("%i", &s.marks[i]);
    }
}

void printStudent(Student s, bool detailed = false)
{
    printf("Студент: %s, возраст: %i, оценок: %i\n", s.name, s.age, s.marks_count);
    if (detailed)
    {
        printf("Оценки: ");
        for (int i = 0; i < s.marks_count; i++)
        {
            printf("%i", s.marks[i]);
        }
        printf("\n");
    }
}