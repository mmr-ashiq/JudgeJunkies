#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double A,B,AVG;
    cin>>A>>B;

    AVG=(A*3.5 + B*7.5)/(3.5+7.5);
    cout<<"MEDIA = "<<fixed<<setprecision(5)<<AVG<<endl;
    return 0;
}
