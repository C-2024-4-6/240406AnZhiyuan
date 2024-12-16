#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string id;  
    int score;  
};

void max(Student* students, int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (students[i].score > students[maxIndex].score) {
            maxIndex = i;
        }
    }
    cout << "最高成绩者的学号为: " << students[maxIndex].id << endl;
}

int main() {
    Student students[5];
    students[0] = { "001", 85 };
    students[1] = { "002", 90 };
    students[2] = { "003", 88 };
    students[3] = { "004", 92 };
    students[4] = { "005", 80 };

    max(students, 5);

    return 0;
}