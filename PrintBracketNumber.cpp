/*
Q. Given an expression exp of length n consisting of some brackets. 
The task is to print the bracket numbers when the expression is being parsed.
Input:
    3​
    (a+(b*c))+(d/e)​
    ((())(()))
    ((((()
Output:
    1 2 2 1 3 3
    1 2 3 3 2 4 5 5 4 1
    1 2 3 4 5 5
*/
#include <iostream>
#include <stack> 
using namespace std;

int main() {
	//code
	stack <int> stk;
	int t;
	cin >> t;
	while(t--){
        string s;
        cin >> s;
        int expCount=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                expCount++;
                stk.push(expCount);
                cout << expCount << " ";
                
            }else if(s[i]==')'){
                cout << stk.top() << " ";
                stk.pop();
            }
        }
        cout << endl;
	}
	return 0;
}