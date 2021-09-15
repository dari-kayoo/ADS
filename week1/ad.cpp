#include <iostream>
using namespace std;
struct Advertising{
    int amountOfad;
    int prosentOfcl;
    double salaryForOneAd;
};
void c(Advertising ad){
    cout << ad.amountOfad << endl << ad.prosentOfcl << endl << ad.salaryForOneAd<< endl;
    cout << ad.amountOfad * ad.prosentOfcl * ad.salaryForOneAd<< endl;
}
int main(){
    int a, p;
    double s;
    Advertising adv;
    cin >> adv.amountOfad >> adv.prosentOfcl >> adv.salaryForOneAd;
    c(adv);

    return 0;
}