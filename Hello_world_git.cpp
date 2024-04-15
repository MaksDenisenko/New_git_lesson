
#include <iostream>
#include "Student.h"
#include "group.h"


int main()
{
    system("chcp 1251");
    Group gr;
    fillGroupByHand(gr);
    system("cls");

    printGroup(gr);


    system("pause");
    std::cout << "Hello World!\n";
}
