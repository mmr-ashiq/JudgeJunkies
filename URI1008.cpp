#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int employee_number,worked_hour;

    double per_hour_salary,SALARY=0;

    cin>>employee_number>>worked_hour>>per_hour_salary;
    SALARY = worked_hour*per_hour_salary;
    cout<<"NUMBER = "<<employee_number<<endl;
    cout<<fixed;
    cout<<setprecision(2)<<"SALARY = U$ "<<SALARY<<endl;

return 0;}
