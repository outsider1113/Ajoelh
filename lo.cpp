#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void printMenu();
int main() {
    struct record{
        int id;
        string name;
        int quantity;
        double price;
    };
    ifstream infile;
    ofstream outfile;
    printMenu();
    
    
    enum option{ printAll = 1,  printInvalid = 2 ,quit = 3};
    int num;
    cin >> num;
    
    
    switch(num) {
        case printAll:
        cout << "Option 1";
        break;
        case printInvalid:
        cout << "Option 2";
        break;
        case quit:
        cout << "Option 3";
        
    }
    
return 0;
} 

void printMenu(){
    cout<< "Invetory Organizer:\n\nEnter the number that correlates to an option\n\n1: Print all current items\n2: Print invalid Records\n3: Quit\n\nPlease enter an option: ";
}
void getData(ifstream &infile){
    
}


void addNumFromUser(int userNum, int overallNum){}