#include<iostream>
using namespace std;

bool valid(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    return 0;
}

char toLower(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch >= '9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string a){
    int s = 0;
    int e = a.length() - 1;

    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }

    return 1;
}


int main()
{
    string s;

    cout<<"Enter the word: " << endl;
    cin>>s;

    // faltu characters hata do
    string temp = "";

    for(int j=0; j<s.length(); j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }

    // Uppercase to lowercase
    for(int j=0; j<temp.length(); j++){
        temp[j] = toLower(temp[j]);
    }

    cout<< checkPalindrome(temp);

}