#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double pi = 3.141592653;
     double x;
    cin>>x;
     double ans = pi * x * x;
    cout<<fixed<<setprecision(9);// this is a compulsary statement for using set precision
    cout<<ans<<endl;
}

// set precision function, this tells how many digits will occur after the decimal point
// #include<iomanip> this library should be included to use set precision function.
