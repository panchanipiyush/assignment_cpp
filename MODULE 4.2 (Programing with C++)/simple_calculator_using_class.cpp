# include<iostream>
# include<string.h>
using namespace std;

class calculator
{
public:
    int num1,num2;
    float result;
    void getdata()
    {
        cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
        cout<<"\nenter value 1: ";
        cin>>num1;
        cout<<"\nenter value 2: ";        
        cin>>num2;
        cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
    }
    void addition()
    {
        result=num1+num2;
        cout<<"\naddition = "<<result;
        cout<<"\n-------------------------";
    }
    void substaction()
    {
        result=num1-num2;
        cout<<"\nsubstraction = "<<result;
        cout<<"\n-------------------------";
    }
    void multiplication()
    {
        result=num1*num2;
        cout<<"\nmultiplication = "<<result;
        cout<<"\n-------------------------";
    }
    void division()
    {
        result=num1/(float)num2;
        cout<<"\ndivision = "<<result;
        cout<<"\n-------------------------";
    }
    void modulo()
    {
        result=num1%num2;
        cout<<"\nmodulo = "<<result;
        cout<<"\n-------------------------";
    }
};
int main()
{
    calculator obj;
    obj.getdata();
    obj.addition();
    obj.substaction();
    obj.multiplication();
    obj.division();
    obj.modulo();

    return 0;
}
