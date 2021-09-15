#include <iostream>
#include <cmath>
using namespace std;
bool IsPrime(int a)
{
 
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0)
            return false;
    return true;

}
int main()
{
    int n;
    cin >> n;
    if (IsPrime(n))
        cout << "prime";
    else
        cout << "composite";
    return 0;
}