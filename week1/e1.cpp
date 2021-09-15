
#include <iostream>
#include <queue>
using namespace std;
queue<int> a, b;
int main()
{
    for(int i = 0, x; i < 5; ++i){
        cin >> x;
        a.push(x);
    } 
    for(int i = 0, x; i < 5; ++i){
        cin >> x; 
        b.push(x);
    } 
    int moves = 0;
    for(; !a.empty() && !b.empty() && moves <= 200000; ++moves)
    {
        int f = a.front(), s = b.front();
        a.pop(); 
        b.pop();
        queue<int> * win;
        if(f == 0 && s == 9){
            win = &a;
        } else if(s == 0 && f== 9){
            win = &b;
        }else if(f > s){
            win = &a;
        }else{
            win = &b;
        }
        win->push(f); 
        win->push(s);
    }
    if (a.empty()){
        cout << "second " << moves << endl;
    } 
    else if (b.empty()){
        cout << "first " << moves << endl;
    } 
    else{
         cout << "botva" << endl;
    }
}