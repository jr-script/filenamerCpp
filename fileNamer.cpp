#include <iostream>
#include <string>

using namespace std;

int main(){
    string fname;
    string lname;
    string secNum;
    string workName;
    cout << "Type your first name: ";
    cin >> fname;
    cout << "Type your last name: ";
    cin >> lname;
    cout << "Enter your class section: ";
    cin >> secNum;
    cout << "Enter the job's title: ";
    cin >> workName;

    string newFileName = fname + lname + "_" + "secc" + secNum + "_" + workName;
    cout << newFileName;
}
