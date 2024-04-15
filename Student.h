
struct Student
{
    char name[100];
    int age = 0;
    int marks[100];
    int marks_count = 0;
};

double getAvergeMark(Student s);
void fillStudentByHand(Student& s);
void printStudent(Student s, bool detailed);
