#include <iostream>
#include <cmath>
using namespace std;

int main(){

int sum = 0;
int num;

    for(int x = 0;x<4;x++){
        cout << "Enter a number:  ";
        cin >> num;
        sum+=num;
    }
    cout << "\nSum of numbers:  " << sum << endl;
return 0;
}
