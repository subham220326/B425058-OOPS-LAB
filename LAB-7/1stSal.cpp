#include <iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int basicSal;
};
class Developer :public Employee{
    protected:
int exp;
    public:
};
class SeniorDeveloper : public Developer{
    public:
    int projectbonus;
    public:
    SeniorDeveloper(string n,int b,int e,int p){
        name=n;
        basicSal=b;
        exp=e;
        projectbonus=p;
    }
    int finalSal(){
        return (basicSal+projectbonus+(basicSal*0.05*exp));
    }
};
int main(){
    SeniorDeveloper s1("sub",1000,13,500);
    cout<<s1.finalSal()<<endl;
    return 0;
}