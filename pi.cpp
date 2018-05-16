#include <iostream>
#include <cmath>
using namespace std;
int main(){

int n;
double pi;
cout << "Enter the number of terms to approximate (or zero to quit):\n";
cin >> n;
if (n !=0){
for (int i = 0 ; i <= n ; i++){

pi = pi + (pow(-1,i)/(2*i+1));

}

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(3);

if (n > 1)
cout << "The approximation is " << pi*4 << " using " << n << " terms." << endl;
else
cout << "The approximation is " << pi*4 << " using " << n << " term." << endl;
main();

}
return 0;
}
