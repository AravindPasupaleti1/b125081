
#include <iostream>
using namespace std;

class Score {
    int score;

public:
    Score(int s = 0) {
        score = s;
    }

    Score operator++() {
        ++score;
        return *this;
    }

    Score operator++(int) {
        Score temp = *this;
        score++;
        return temp;
    }

    void display() const {
        cout << score;
    }
};

int main() {
    Score s1(10), s2(20);

    Score prefixResult = ++s1;

    cout << "Prefix result: ";
    prefixResult.display();

    cout << "\nOriginal after prefix: ";
    s1.display();

    Score postfixResult = s2++;

    cout << "\nPostfix result: ";
    postfixResult.display();

    cout << "\nOriginal after postfix: ";
    s2.display();

    return 0;
}