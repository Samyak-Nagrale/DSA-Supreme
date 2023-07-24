#include<bits/stdc++.h>
using namespace std;

void replace_spaces(string &s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            s[i] = '@';
        }
    }
}

int main(){

    string s;
    cout<<"Enter a string :";
    getline(cin , s);

    cout<<"Entered String: "<<s<<endl;

    replace_spaces(s);

    cout<<"Modified Strings: "<<s<<endl;


    return 0;
}