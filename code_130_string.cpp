
//Check Pangram

#include <iostream>
#include <vector>
using namespace std;

int main() {
    string sentence = "the quick brown fox jumps over the lazy dog.";

    vector<bool> alpha(26, false);
    for (int i = 0; i < sentence.size(); i++) {
        if (isalpha(sentence[i])) {
            int index = sentence[i] - 'a';
            alpha[index] = true;
        }
    }

    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (!alpha[i]) {
            isPangram = false;
            break;
        }
    }

    if (isPangram) {
        cout << "Pangram" << endl;
    } else {
        cout << "Not Pangram" << endl;
    }

    return 0;
}

