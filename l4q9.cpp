//q9 write a C++ program to calculate simple interest
#include<iostream>
using namespace std;
int main () {
float P,R,T,SI ;
cout << "enter  Principal:" << endl ;
cin >> P ;
cout << "enter Rate :" << endl ;
cin >> R ;
cout << "enter Time :" << endl ;
cin >> T ;
SI= P*R*T*1/100 ;
cout << "principal:" << P << "rupees" << endl ;
cout << "rate:" << R << "%" << endl ;
cout << "time:" << T << "year" << endl ;
cout << "simple interest:" << SI << "rupees" << endl ;

return 0 ;
}

