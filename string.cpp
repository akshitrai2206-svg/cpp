// Question 1
// Write a C++ program to calculate the length of a string

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){

//     string firstname = "David";
//     cout << "The length of the string is: " << firstname.length();

//     return 0;
// }



// // Question 2
// // Write a C++ program to accept a string from user and display it

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){

//     string first_name;

//     cout << "Enter your name: ";
//     cin >> first_name;
    
//     return 0;
// }



// // Question 3
// // Write a C++ program to accept a string from user and copy it to another string

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){

//     string first_name;
//     cout <<"Enter you first name: ";
//     cin >> first_name;

//     string last_name;
//     cout << "Enter your last name: ";
//     cin >> last_name;

//     string full_name = first_name + " " + last_name;
//     cout << "Your full name is: " << full_name;

//     return 0;
// }



// // Question 4
// // Write a C++ program take a string from user and count the words

#include <iostream>
#include <cstring>   
using namespace std;

int main() {

    char str[200];   
    int count = 0;

    cout << "Enter a string: ";
    cin >> str;

    while (str != NULL) {
        count++;                 
    }

    cout << "Number of words: " << count << endl;

    return 0;
}
