#include <iostream>

using namespace std;

class Printer {
    bool blackAndWhite, bothSided;
    Printer(bool bw = false, bool bs = false) : blackAndWhite(bw), bothSided(bs) {
        cout << "Printer constructed" << endl;
    }

    ~Printer() {
        cout << "Printer destructed" << endl;
    }

public:
    static const Printer& printer(bool bw = false, bool bs = false) {
        static Printer myPrinter(bw, bs);
        return myPrinter;
    }

    void print(int nP) const {
        cout << "Printing " << nP << " pages" << endl;
    }
};

int main() {
    Printer::printer().print(10);
    Printer::printer().print(20);
}
