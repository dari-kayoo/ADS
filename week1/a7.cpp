#include <iostream>
using namespace std;
struct st
{
    int a[100];
    int topInd;
    st()
    {
        int n;
        topInd = -1;
    }

    int top()
    {
        if (topInd == -1)
            return -1;
        return a[topInd];
    }
    int size(){
        int count;
        while(topInd != -1){
            count++;
        }
        return count;   
    }
    bool empty(){
        if(topInd == -1) return 0;
        return 1;
    }

    void push(int x)
    {
        topInd++;
        a[topInd] = x;
    }
    void pop()
    {
        if (topInd != -1)
            topInd--;
    }
};
int main()
{
    st s;
    string str;
    while (cin >> str)
    {
        int n;
        if (str == "push")
        {
            cin >> n;
            s.push(n);
            cout<< "ok" << endl;

        }
        else if(str == "pop"){
            cout<< s.top()<< endl;
            s.pop();
        }
        else if(str == "back"){
            cout<<s.top() << endl;

        }
        else if(str == "size"){
            cout<< s.size()<< endl;
        }
        else if(str == "clear"){
            while(!s.empty()){
                s.pop();
            }
            cout << "ok" << endl;
        }
        else if(str == "exit"){
            cout << "bye"<< endl;
            break;
        }
    }

    return 0;
}