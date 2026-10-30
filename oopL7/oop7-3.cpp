
#include <iostream>
using namespace std;

class Candidate {
protected:
    int id;
    float attendance;

public:
    Candidate(int i, float a) {
        id = i;
        attendance = a;
    }
};

class RegularCandidate : public Candidate {
public:
    RegularCandidate(int i, float a) : Candidate(i, a) {}

    void checkEligibility() {
        cout << "Candidate ID: " << id << endl;

        if (attendance >= 75)
            cout << "Eligible for Exam" << endl;
        else
            cout << "Not Eligible for Exam" << endl;
    }
};

class ReappearCandidate : public Candidate {
public:
    ReappearCandidate(int i, float a) : Candidate(i, a) {}

    void checkEligibility() {
        cout << "Candidate ID: " << id << endl;

        if (attendance >= 60)
            cout << "Eligible for Reappear Exam" << endl;
        else
            cout << "Not Eligible for Reappear Exam" << endl;
    }
};

int main() {
    RegularCandidate r(101, 80);
    ReappearCandidate re(102, 65);

    cout << "Regular Candidate:" << endl;
    r.checkEligibility();

    cout << "\nReappear Candidate:" << endl;
    re.checkEligibility();

    return 0;
}
