#include <iostream>
using namespace std;

int main(){
    int input = 1;
    int evenCount = 0;
    int oddCount = 0;

    while (input != 0){
        cout << "Enter an integer: ";
        cin >> input;
        
        if(input == 0){
            break;
        }
        
        if(input % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "#Even numbers = " << evenCount << "\n";
    cout << "#Odd numbers = " << oddCount << "\n";
    return 0;
}
