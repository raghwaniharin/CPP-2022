#include<iostream>
using std::string;
using namespace std;


class employee{
    //encapsulating the contents of the object
private:
    string name;
    string company;
    int age;
public:
    //function to access private variables
    void setname(string name){name=name;}
    //function to get info from private variables
    string getname(){return name;}
    void setcomp(string company){company=company;}
    string getcomp(){return company;}
    void setage(int age){age=age;}
    int getage(){return age;}

    //not a constructor since it has void
    void intro(){
    cout<<"name--"<<name<<"\n";
    cout<<"company--"<<company<<"\n";
    cout<<"age--"<<age<<"\n";
    }
    //constructor must be public type of class and has no return type
    employee( string Name,string Company,int Age){
    name=Name;
    company=Company;
    age=Age;

    }

};

int main(){

    employee emply1=employee("harin ","microsoft",19);
    employee emply2;
        emply2.setname="nemuel";
        emply2.setcomp="amazon";
        emply2.setage=16;



    cout<<"your details are::\n";
    emply1.intro();
    emply2.intro();




return 0;}
