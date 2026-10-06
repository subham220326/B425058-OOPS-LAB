#include <iostream>
using namespace std;

class Academic {
protected:
    float m1, m2, m3;
public:
    Academic(float a, float b, float c) {
        m1 = a;
        m2 = b;
        m3 = c;
    }
};

class Sports {
protected:
    float sportsMarks;
public:
    Sports(float sm) {
        sportsMarks = sm;
    }
};

class StudentResult : public Academic, public Sports {
private:
    float total;
    float average;
public:
    StudentResult(float a, float b, float c, float sm) : Academic(a, b, c), Sports(sm) {
        total = m1 + m2 + m3 + sportsMarks;
        average = total / 4.0;
    }

    void display() {
        cout << "Academic Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Sports Marks: " << sportsMarks << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    StudentResult student(85.5, 90.0, 78.5, 88.0);
    student.display();
    return 0;
}