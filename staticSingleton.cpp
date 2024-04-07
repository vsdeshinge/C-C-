#include <iostream>

using namespace std;

class Printer {
private:
    bool blackAndWhite;
    bool bothSided;
    static Printer *myPrinter;

    
    Printer(bool bw = false, bool bs = false) : blackAndWhite(bw), bothSided(bs) {
        cout << "Printer constructed" << endl;
    }

public:
    // Destructor
    ~Printer() {
        cout << "Printer destructed" << endl;
    }

    // Static method to access the singleton instance
    static Printer& printer(bool bw = false, bool bs = false) {
        if (!myPrinter) {
            myPrinter = new Printer(bw, bs);
        }
        return *myPrinter;
    }

    
    void print(int nP) const {
        cout << "Printing " << nP << " pages." << endl;
    }

    
    Printer(const Printer&) = delete;
    Printer& operator=(const Printer&) = delete;
};

Printer* Printer::myPrinter = nullptr;



int main() {
    Printer::printer().print(10);
    Printer::printer().print(20);

    // Since we're using raw pointers, we need to explicitly delete the singleton instance
    delete &Printer::printer();
    

    return 0;
}
