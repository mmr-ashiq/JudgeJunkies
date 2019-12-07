#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float A,B,C,AVG;
    cin>>A>>B>>C;

    AVG=(A/10*2)+(B/10*3)+(C/10*5);
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<AVG<<endl;
    return 0;
}
