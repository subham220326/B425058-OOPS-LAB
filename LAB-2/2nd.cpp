#include <iostream>
using namespace std;
class Rectangle{//CREATED A RECTANGLE CLASS
    int length;
    int breadth;
    int area;
    int perimeter;
    public:
    void UserInput(){//CREATED A FUNCTION TO TAKE THE USER INPUT
      cout << "enter Length Of Rectangle : ";
      cin>>length;
      cout << "enter Breadth Of Rectangle : ";
      cin>>breadth;
    }
    void Area(){//CREATED A FUNCTION TO CALCULATE AREA
        area=length*breadth;
    }
    void Perimeter(){//CREATED A FUNCTION TO CALCULATE PERIMETER
        perimeter=2*(length+breadth);
    }
    void Result(){//CREATED A FUNCTION TO CALCULATE THE RESULT
      cout<<"length and breadth are : "<<length<<" and "<<breadth;
      cout<<"\nPerimeter : "<<perimeter;
      cout<<"\nArea : "<<area;
    }
};

int main(){
  Rectangle rect1;//CREATED A RECT1 OBJECT FROM CLASS RECTANGLE
  rect1.UserInput();
  rect1.Area();
  rect1.Perimeter();
  rect1.Result();
}
