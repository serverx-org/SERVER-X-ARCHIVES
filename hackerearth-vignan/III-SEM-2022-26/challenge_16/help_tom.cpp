// got wrong

#include <bits/stdc++.h>
using namespace std;

string evaluateExpression(const string &str) {
    stack<char> s;
    int resAdd, resMul;
    bool inAddBracket, outAddBracket, inMulBracket, inMulBracket; 
    inAddBracket = outAddBracket =  inMulBracket =  inMulBracket = false; 
    for(char c : str) {
        if(c == '(') {
            inAddBracket = true;
            while(c != ')' && c != '[') {
                resAdd += c;
                s.push(res);
            }
        }
    }
}

int main() {
    string sampleInput = "123(12[34]2)(23)";
    string result = evaluateExpression(sampleInput);
    cout << result << endl;

    return 0;
}

/* --------------[OUTPUT]--------------------

123(12[34]2)(23)
12385

--------------[END-OF-OUTPUT]-------------- */
