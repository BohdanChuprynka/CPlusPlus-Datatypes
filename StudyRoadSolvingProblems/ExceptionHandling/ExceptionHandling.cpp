#include <iostream>
#include <string>

using namespace std;

class Printer { 
    string _name;
    int _availablePaper;
public:
    Printer(string name, int paper) {
        _name = name;
        _availablePaper = paper;
    }
    void Print(string txtDoc) {
        int requiredPaper = txtDoc.length() / 10;

        if(requiredPaper>_availablePaper)
            throw "No paper";

        cout << "Printing... " << txtDoc << endl;
        _availablePaper -= requiredPaper;

    }
};

int main()
{
     Printer myPrinter("HP DeskJet 1234", 10);
     try {
         myPrinter.Print("Hello, my name is Bohdan. I am a Software Engineer.");
         myPrinter.Print("Hello, my name is Bohdan. I am a Software Engineer.");
         myPrinter.Print("Hello, my name is Bohdan. I am a Software Engineer.");   
     }
     catch(const char* txtException) {
         cout <<"Exception: "<< txtException << endl;
     }
     catch(int exCode) {
        cout <<"Exception: "<< exCode << endl;
     }
     catch(...) {
        cout << "Exception Happened!" << endl;
     }


     system("pause>nul");
     return 0;
}