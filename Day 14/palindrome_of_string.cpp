#include<iostream>
using namespace std;


char toLower(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    } 
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(toLower(a[s]) != toLower(a[e])){
            return false;
        }
        else {
            s++;
            e--;
        }
    }
    return true;
}


void reverse(char word[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(word[s++], word[e--]);
    }
}


int getLength(char word[]){
    int count = 0;
    for(int i = 0; word[i] != '\0'; i++){
        count++;
    }

    return count;
}


int main()
{
    char word[20];

    cout<< "Enter a word" << endl;
    cin >> word;

    cout<< "The word is: " << word << endl;

    int len = getLength(word);
    cout<< "The length of word is: " << len << endl;

    reverse(word, len);
    cout<< "The reverse of the word is: " << word <<endl;

    int palindrome = checkPalindrome(word, len);

    cout<< "Is the word palindrome?: ";
    if(palindrome == 1) {
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}