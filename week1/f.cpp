#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack <char> s;
int main()
{
	char c; 
    bool result = true; 
	string str; 
    cin >> str;
	for (int i = 0; i < str.size(); i++) { 
		c = str[i];
		if (c == '(' || c == '{' || c == '[') {
			s.push(c); 
            continue;
		}						
		switch (c){	
		case ')': if (!s.empty() && s.top() == '(') s.pop();
			else result = false; 
			break;
		case '}': if (!s.empty() && s.top() == '{') s.pop(); 
			else result = false; 
			break;
		case ']': if (!s.empty() && s.top() == '[') s.pop(); 
			else result = false; 
			break;
		}
	}
    if(result== true && s.empty()){
        cout << "yes";
    }
    else{
        cout << "no";
    }
	return 0;
}