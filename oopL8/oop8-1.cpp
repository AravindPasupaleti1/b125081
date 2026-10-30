
#include <iostream>
using namespace std;

class Document {
public:
    virtual void exportFile() {
        cout << "Exporting Document" << endl;
    }
};

class PDFDocument : public Document {
public:
    void exportFile() override {
        cout << "Exporting as PDF (.pdf)" << endl;
    }
};

class TextDocument : public Document {
public:
    void exportFile() override {
        cout << "Exporting as Text (.txt)" << endl;
    }
};

class CSVDocument : public Document {
public:
    void exportFile() override {
        cout << "Exporting as CSV (.csv)" << endl;
    }
};

int main() {
    PDFDocument p;
    TextDocument t;
    CSVDocument c;

    Document *ptr;

    ptr = &p;
    ptr->exportFile();

    ptr = &t;
    ptr->exportFile();

    ptr = &c;
    ptr->exportFile();

    return 0;
}
