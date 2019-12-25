#include <bits/stdc++.h>
using namespace std;
int main()
{
    int id,unit;
    double price,sum;
    cin>>id>>unit>>price;
    sum = unit * price;
    cin>>id>>unit>>price;
    sum += unit * price;
    
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<sum<<endl;

    return 0;
}

