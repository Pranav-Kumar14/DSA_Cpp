#include<bits/stdc++.h>
using namespace std;

void counter(int x){
    int temp = x;
    int count = 0;
    while(temp!=0){
        count++;
        temp/=10;
    }
    cout << "The number of digits in the number is : " << count << endl;
}

void reverser(int x){
    int temp = x;
    int rev = 0;
    while(temp!=0){
        rev = rev*10 + temp%10 ;
        temp/=10;
    }
    cout<< "The reverse of " << x <<" is " << rev;
}

void palindromer(int x){
    int temp = x;
    int rev = 0;
    while(temp!=0){
        rev = rev*10 + temp%10 ;
        temp/=10;
    }
    string palin = rev==x? "Yes" : "No";
    cout << "Palindrome : " << palin;
}

void gcder(int x, int y){
    int gcd = 0;
    for(int i=x; i>=1; i--){
        if(y%i==0 && x%i==0){
            gcd = i;
            break;
        }
    }
    cout << "GCD of " << x << " and " << y << " is : " << gcd;
}

void armstronger(int x){
    int temp = x;
    int count = 0;
    while(temp!=0){
        count++;
        temp/=10;
    }
    temp = x;
    int arm = 0;
    while(temp!=0){
        arm = arm + pow(temp%10, count);
        temp/=10;
    }
    string armer = x==arm? "Yes" : "No";
    cout << "Armstrong : " << armer;
}

void primer(int x){
    int count = 0;
    for(int i=2; i<x; i++){
        if(x%i==0){
            count++;
        }
    }
    string prim = count==0? "Yes" : "No";
    cout << "Prime : " << prim;
}

int main(){
    int x, y;
    cout << "Please enter a number : ";
    cin >> x;
    //cout << "Please enter a number : ";
    //cin >> y;
    primer(x);
    return 0;
}
