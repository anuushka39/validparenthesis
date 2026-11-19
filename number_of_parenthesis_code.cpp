#include<iostream>
#include<string>
#include <stack>
using namespace std;
int longest_consecutive_parenthesis(string a){
    // ((((     ))))      ((()))   ())  (()()
    int ans = 0 ;
    stack<char> s;
    for (int i=0; i < a.length(); i++ ){
        if(a[i]=='('){
            s.push(a[i]);
        }
        if(a[i]==')' && !s.empty() && s.top()=='('){
            ans+=2;
            s.pop();
        }
    }
    return ans;
}
int main(){
    string str[3] = {"(()", ")()())", "" }; //2, 4, 0
    for(int i=0; i < 3 ; i++){
        cout<<" number of parenthesis for string " << i+1 << ":" << longest_consecutive_parenthesis(str[i]);
    }

}