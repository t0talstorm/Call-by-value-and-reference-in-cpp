// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 10-D

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

void swap_chars(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void ReversingString(string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap_chars(str[i], str[n - i - 1]);
    }
}

int main() {
    string myString;
    
    cout << "Enter a string to reverse: ";
    getline(cin, myString);

    cout << "Original string: " << myString << endl;

    ReversingString(myString);

    cout << "Reversed string: " << myString << endl;
    return 0;
}

/*
OUTPUT :
Enter a string to reverse: Madam
Original string: Madam
Reversed string: madaM


=== Code Execution Successful ===

Enter a string to reverse: Hello world!
Original string: Hello world!
Reversed string: !dlrow olleH


=== Code Execution Successful ===

*/
