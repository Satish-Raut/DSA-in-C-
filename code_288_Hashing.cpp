#include <iostream>
using namespace std;

int main() {
    int key, index, n;

    // Input the size of the hash table
    cout << "Enter the size of hash table: ";
    cin >> n;

    int hashtable[n];

    // Initialize hash table with -1 to indicate empty slots
    for (int i = 0; i < n; i++) {
        hashtable[i] = -1;
    }

    int numkey;
    cout << "Enter the number of keys: ";
    cin >> numkey;

    int keys[numkey];

    // Input the keys to be inserted
    for (int i = 0; i < numkey; i++) {
        cout << "Enter the key: ";
        cin >> keys[i];
    }

    // Insert each key into the hash table
    for (int i = 0; i < numkey; i++) {
        key = keys[i];
        index = key % n; // Compute initial index

        // Handle collisions using linear probing
        while (hashtable[index] != -1) {
            index = (index + 1) % n; // Move to the next slot cyclically
        }

        hashtable[index] = key; // Insert the key
    }

    // Output the hash table
    cout << "Values of hash table: ";
    for (int i = 0; i < n; i++) {
        if(hashtable[i] != -1)
        cout << hashtable[i] << " ";
    }

    return 0;
}
