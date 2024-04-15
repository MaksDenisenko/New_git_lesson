
#include <iostream>
#include "Student.h"



int main()
{
    system("chcp 1251");
    int s_counter = 2;
    Student group[50];

    for (int i = 0; i < s_counter; i++)
    {
        fillStudentByHand(group[i]);
    }

    for (int i = 0; i < s_counter; i++)
    {
        printStudent(group[i], true);
    }

    system("pause");
    std::cout << "Hello World!\n";
}
