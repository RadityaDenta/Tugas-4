#include <iostream>
using namespace std;

int main ()
{
float L,K;
int AB,BC,CD,DA,t;
cout<<"masukkan nilai panjang rusuk sejajar atas : ";
cin>>AB;
cout<<"masukkan nilai panjang rusuk sejajar bawah : ";
cin>>CD;
cout<<"masukkan nilai rusuk sejajar samping 1 : ";
cin>>DA;
cout<<"masukkan nilai rusuk sejajar samping 2 : ";
cin>>BC;
cout<<"masukkan nilai tinggi : ";
cin>>t;
L=(CD+AB)*t/2;
K=(AB+BC+CD+DA);
cout<<"luas trapesium : "<<L<<"cm2"<<endl;
cout<<"keliling trapesium : "<<K<<"cm"<<endl;
}
