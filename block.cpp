#include <iostream>
using namespace std;
int main(){

int h,w;
cout << "Enter number of rows and columns:" << "\n";
cin >> h >> w;
for ( int i = 0 ; i < h ; i++ ){
  for ( int j = 0 ; j < w ; j++)
    cout << "X." ;
cout << endl;
}
if (h != 0 && w != 0)
main(); 
return 0;

}
