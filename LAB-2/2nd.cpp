#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    int area;
    int perimeter;
    public:
    void UserInput(){
      cout << "enter Length Of Rectangle : ";
      cin>>length;
      cout << "enter Breadth Of Rectangle : ";
      cin>>breadth;
    }
    void Area(){
        area=length*breadth;
    }
    void Perimeter(){
        perimeter=2*(length+breadth);
    }
    void Result(){
      cout<<"length and breadth are : "<<length<<" and "<<breadth;
      cout<<"\nPerimeter : "<<perimeter;
      cout<<"\nArea : "<<area;
    }
};

int main(){
  Rectangle rect1;
  rect1.UserInput();
  rect1.Area();
  rect1.Perimeter();
  rect1.Result();
}
