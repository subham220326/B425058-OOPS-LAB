#include <iostream>
using namespace std;

class InternalExam {
public:
    void display() {
        cout << "Displaying Internal Exam." << endl;
    }
};

class ExternalExam {
public:
    void display() {
        cout << "Displaying External Exam." << endl;
    }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    void displayResults() {
        cout << "Resolving Ambiguity " << endl;

        InternalExam::display();
        ExternalExam::display();
    }
};

int main() {
    FinalResult res;
    res.displayResults();
    return 0;
}