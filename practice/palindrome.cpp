#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    cin >> text;
    int length = text.length() , score = 0;
    for(int i = 0; i < length; i++){
        if(text[i] == text[length - i - 1]){ // counting down from length to not use another variable
            score++;
        }
    }

    if(score == length){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
