#include<iostream>
#include<string>
// HARIN HARISH RAMJI
//P15\1426222\2021
//ASSIGNMENT 2

using namespace std;

class Property{
private:
    float price;
    int propertyno;
    string propertyname;
    char type;
public:
    property(){
    this->price= price;
    this->propertyno=propertyno;
    this->propertyname =propertyname;
    this->type= type;}

    string style;
        struct Location{
            string streetname;
            string city;
            string plotno;
            string houseno;
            string apartmentno;
            string postalcode;
                };
                Location address;
//member functions prototypes
    void SaleorLet();
    void SoldorRented();
    void PropertyTypeDetails();
};
void Property :: PropertyTypeDetails()
{
    Property property1;
    cout << "Enter the property number: \n";
    cin >> propertyno;
    cout << "Enter the property price: \n";
    cin >> price;
    cout << "Enter the property name: \n";
    cin >> propertyname[2];
    cout << "Types of properties: \n 1.Land, 2.Apartment or 3.House\n";
    cout << "Enter the property type:\n";
    cin >> type;
    if (type == 1)
    {
        cout <<"Enter the plot number:\n";
        cin >> address.plotno;
    }
    else if(type == 2)
    {
        cout <<"Enter the apartment number:\n";
        cin >> address.apartmentno;
    }
    else if(type == 3)
        {
        cout <<"Enter the house number:\n";
        cin >> address.houseno;
        cout << "Enter the property style:\n";
        cin >> style;
        }
    else{exit(0);}
    cout << "Enter the street name: \n";
    cin >> address.streetname;
    cout << "Enter the city:\n";
    cin >> address.city;
    cout << "Enter the postal code:\n";
    cin >> address.postalcode;
};

void Property :: SaleorLet()
{
    string choice;
    string sale;
    string let;
    cout << "Do you want to sale or rent/let?";
    cin >> choice;
    if (choice == "sale")
    {
        cout << "Property is on sale.\n";
    }
    else if (choice == "let")
    {
        cout << "Property is on let\n";
    }
    else{
        cout << "PROPERTY CURRENTLY ON MARKET.\n";
        exit(0);
    }
};

void Property::SoldorRented()
{
    string decision;
    string sold;
    string rented;
    cout << "Is property sold or rented?";
    cin >> decision;
    if (decision =="sold")
    {
        cout << "Property sold.\n";
    }
    else if (decision=="rented")
    {
        cout << "Property rented.\n";
    }
    else{
        cout << "PROPERTY CURRENTLY ON MARKET.\n";
        exit(0);
    }
};
class Client: public Property{
private:
    string firstname;
    string lastname;
    int phone;

public:
    client(){
    this->firstname=firstname;
    this-> lastname=lastname;
    this-> phone=phone;}
};
class Land: public Property{
private:
    int acres;
public:
    land(){
    this->acres= acres;}
};

class Agent:public Property{
public:
    string agentname;
    string id;
    string company;
    int noofagents[10];
    void printdetails();
   void AgentDetails()
    {
        for (int i=0;i<=10;i++)
        {
            cout << "Enter your name: \n";
            cin >> agentname;
            cout << "Enter your ID:\n";
            cin >> id;
            cout << "Enter your Company:\n";
            cin >> company;
        }
    }
};
void Agent::printdetails(){
    cout<<agentname<<("\n");
    cout<<id;
}


int main(){
    LOOP:
int choice,i;
            cout << "\t\t\t\t MENU\n";
            cout <<"1.Property Details\n";
            cout <<"2.Agent Details\n";
            cout <<"3.Sale or Let\n";
            cout <<"4.Sold or Rented\n";
            cin >> choice;
                switch(choice)
                {
                case 1:
                    {
                    Property();
                    Property a;
                    a.PropertyTypeDetails();
                    break;
                    }
                case 2:
                    {Property();
                    Agent b;
                    b.AgentDetails();
                    break;}
                case 3:
                    {Property();
                    Property c;
                    c.SaleorLet();
                    break;}
                case 4:
                    {Property();
                    Property d;
                    d.SoldorRented();
                    break;}
                default:
                    break;
            }
        cout << "Do you wish to continue?\n1-Yes OR 0-No:\n";
        cin >> i;
            if (i==1)
                {goto LOOP;}
            else {exit(1);}

return 0;
}
