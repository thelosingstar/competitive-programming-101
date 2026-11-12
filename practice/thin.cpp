#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    string temp;
    vector<string> text{};

    cin >> h >> w;
    cin.ignore(); // to get rid of newline buffer

    for(int i = 0; i < h; i++){  // to get string inputs as the number of times user has inputed 'h'
        getline(cin, temp); // i used temp because i could not find a way to add directly to the vector text
        text.push_back(temp); // adding the inputs  to temp
    }
    for(int j = 0; j < text.size(); j++){ // now displaying the text by using for loop until j reaches the no of elements in text
        for(int i = 0; i < 2; i++){  // displaying the text 2 times
            cout << text[j];
            cout << endl;
            
        }
    }

}
