#include <iostream>
using namespace std;
class Distance{//CREATED A CLASS NAME DISTANCE
     public:
    int feet;
    int inch;
   
    void UserInput(){//CREATED A FUNCTION TO TAKE INPUT
      cout << "enter feet  : ";
      cin>>feet;
      cout << "enter inch : ";
      cin>>inch;
    }
};
void TotalDistance(int feet1,int inch1,int feet2,int inch2){//CREATED A FUNCTION TO CALCULATE TOTAL DISTANCE
    int totalFeet=feet1+feet2;
    int totalInch=inch1+inch2;
    if(totalInch>=12){
        totalFeet+=totalInch/12;
        totalInch=totalInch%12;
    }
    cout<<"Total Distance : "<<totalFeet<<" feet and "<<totalInch<<" inch";
}
int main(){
  Distance d1,d2,total;//CREATED OBJECTS OF CLASS DISTANCE
  d1.UserInput();
  d2.UserInput();
  TotalDistance(d1.feet,d1.inch,d2.feet,d2.inch);
} 
