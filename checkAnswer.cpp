#include <iostream>
#include <string>
string q{};
string e{};
string val{};

string q2{};
string e2{};
string val2{};

using namespace std;

int main(){
    string q = "What's -3 * 1 / 3";
    string e = "-1";
    string val{};

    cout << q << endl;
    getline(cin, val);

    cout << boolalpha << (val == e) << endl;

    string q2 = "What's 4 + 2 * 5";
    string e2 = "30";
    string val2{};
    
    cout << q2 << endl;
    getline(cin,val2);

    cout << boolalpha << (val2 == e2) << endl;
}






