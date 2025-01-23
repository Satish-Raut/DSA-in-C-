#include <iostream>
#include <string>

using namespace std;

class MultiplicationGame {
public:
    void game(int N) {
        int p = 1;
        int turn = 1;
        string winner;

        while (p < N) {
            if (turn % 2 == 1) {
                p *= turn;
                winner = "John";
            } else {
                p *= turn;
                winner = "Michael";
            }
            turn++;
        }

        cout << N << " " << winner << " wins" << endl;
    }
};

int main() {
    int N;
    cin >> N;

    MultiplicationGame game;
    game.game(N);

    return 0;
}