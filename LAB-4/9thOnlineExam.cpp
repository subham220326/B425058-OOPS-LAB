#include <iostream>
using namespace std;
class Exam{
    private:
    string studentName;
    string subject;
    int marks;
    int TotalMarks = 100; // Assuming total marks is 100
    public:
    Exam(string n, string s, int m) { // Parameterized constructor
        studentName = n;
        subject = s;
        marks = m;
    }
    friend class Result; // Friend Class Declaration
};
class Result{
    public:
    void DisplayDetail(Exam exam1){
        cout << "Student Name: " << exam1.studentName << endl;
        cout << "Subject: " << exam1.subject << endl;
        cout << "Marks: " << exam1.marks << endl;
        int percentage = ((exam1.marks / (float)exam1.TotalMarks) * 100); // Assuming total marks is 100
        cout << "Percentage: " << percentage << "%" << endl;
        if(percentage<40){
            cout << "Result: Fail" << endl;
        } else {
            cout << "Result: Pass" << endl;
        }
    }
};
int main(){
    Exam exam1("Subham", "Mathematics", 75);
    Result result;
    result.DisplayDetail(exam1);
    return 0;
}
