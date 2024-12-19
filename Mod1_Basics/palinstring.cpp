#include<bits/stdc++.h>
using namespace std;

int counter = 0; 

int palinstring(string st, string str, int start, int end){
    if(start<=end){
        swap(str[start],str[end]);
        palinstring(st, str, start+1, end-1);
    }
    if(str == st)
        counter++;
    return counter;
}

int main(){
    string s;
    cout << "Enter the string : " << endl;
    getline(cin, s);
    string p = s;
    int x = p.length();
    int y = s.length()/2+2;
    if(palinstring(s, p, 0, x-1)==y)
        cout << "The string " << s << " is a palindrome";
    else
        cout << "The string " << s << " is not a palindrome";
}