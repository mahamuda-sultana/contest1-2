//Course Title :Competitive programming Sessional
//Course Code :CCE-2310
//Mirza raquib
#include<bits/stdc++.h>
using namespace std;
int main(){
double X,P;
cin>>X>>P;
double originalPrice =P/(1-X/100.0);
cout <<fixed<<setprecision(2)<<originalPrice<<endl;
return 0;
}
