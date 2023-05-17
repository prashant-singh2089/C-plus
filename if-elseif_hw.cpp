#include<iostream>
using namespace std;

int main (){
    char ch ;
    cout << "Enter character"<<endl;
    cin>>ch;

    if('A'<=ch && ch<='Z'){
        cout << "Upper case" << endl;
    }
    else if ( 'a'<=ch && ch<='z'){
        cout<<"Lower case" << endl;
    }
    else if('0'<=ch && ch<='9'){
        cout<<"Numeric"<<endl;
    }
    else {
        cout<<"Nothing"<<endl;
    }
}
