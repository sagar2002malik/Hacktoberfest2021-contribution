
#include<iostream>
using namespace std;
class Employee
{
    protected:
    char name[50];
    int id,salary;
    public:
    void store()
    {
        cout<<"Enter name,id,salary of the employee:"<<endl;
        cin>>name>>id>>salary;
    }
    void show()
    {
        cout<<"Name of the employee:"<<name<<endl;
        cout<<"ID of the employee:"<<id<<endl;
        cout<<"Salary of the employee:"<<salary<<endl;
    }
};
class Regular:public Employee
{
    int DA,HRA,basic,total;
    public:
    void input()
    {
        cout<<"Enter DA,HRA,basic salary of the employee:"<<endl;
        cin>>DA>>HRA>>basic;
    }
    void calculate()
    {
        total=salary+DA+HRA+basic;
    }
    void output()
    {
        cout<<"Total Salary of the Regular employee:"<<total<<endl;
    }
};
class PartTime:public Employee
{
    int n,pph,total;
    public:
    void input()
    {
        cout<<"Enter number of hours the employee works and the pay per hour of the employee:"<<endl;
        cin>>n>>pph;
    }
    void calculate()
    {
        total=salary+(n*pph);
    }
    void output()
    {
        cout<<"Total Salary of the Part time employee:"<<total<<endl;
    }
};
int main()
{
    cout<<"Enter details for Regular Employee:"<<endl;
    Regular ob;
    ob.store();
    ob.input();
    ob.calculate();
    ob.show();
    ob.output();
    cout<<"\nEnter details for Part time Employee:"<<endl;
    PartTime ob1;
    ob1.store();
    ob1.input();
    ob1.calculate();
    ob1.show();
    ob1.output();
    return 0;
}
