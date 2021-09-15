#include <iostream>
using namespace std;
struct drob{
    double on;
    double under;
};
void multiply(drob d1, drob d2){
    cout << static_cast<float>(d1.on*d2.on)/(d1.under*d2.under);
}
int main(){
    drob d1, d2;
    cin >> d1.on >> d1.under;
    cin >> d2.on >> d2.under;
    multiply(d1, d2);


    return 0;
}