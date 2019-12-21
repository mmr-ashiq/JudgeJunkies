#include<bits/stdc++.h>
using namespace std;
int main()
{
    double salary,sale;
    char name[100];
    cin>>name;
    cin>>salary>>sale;
    sale=salary+sale*.15;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<sale<<endl;

    return 0;
}

