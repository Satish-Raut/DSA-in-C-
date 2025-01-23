

#include<iostream>
using namespace std;

int main() {
    char str1[100];
    
    cout << "Enter a sentence: ";
    cin.getline(str1, 100);

    int l = 0;
    while(str1[l] != '\0') {
        l++;
    }

    cout << "Length of the sentence: " << l << endl;

    char target[] = "satish";
    int target_len = 6;
    int found = 0;

    for(int i = 0; i <= l - target_len; i++)
    {
        int j;
        for(j = 0; j < target_len; j++)
        {
            if(str1[i + j] != target[j])
            {
                break;
            }
        }
        if(j == target_len)
        {
            found = 1;
            break;
        }
    }

    if(found)
    {
        cout << "Present";
    }
    else
    {
        cout << "Not Present";
    }

    return 0;
}
