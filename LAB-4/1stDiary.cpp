#include <iostream>
using namespace std;
class Diary {// Class Declaration
    private:
        string OwnerName;
        int NoOfEntries;
        string LastEntry;
    friend void DisplayDiary(Diary);// Friend Function Declaration
};
void DisplayDiary(Diary myDiary) {// Friend Function Definition
    myDiary.OwnerName = "Subham";
    myDiary.NoOfEntries = 5;
    myDiary.LastEntry = "Hesitation is Defeat ~ Sekiro";
    
    cout << "Owner Name: " << myDiary.OwnerName << endl;
    cout << "Number of Entries: " << myDiary.NoOfEntries << endl;
    cout << "Last Entry: " << myDiary.LastEntry << endl;
}
int main() {
    Diary myDiary;
    DisplayDiary(myDiary);// Calling Friend Function
    return 0;
}
