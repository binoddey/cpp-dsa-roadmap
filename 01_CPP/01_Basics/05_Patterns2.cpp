#include <iostream>
using namespace std;

int main() {
    /* Star Triangle Pattern
    #
    # #
    # # #
    */
    int a;
    cout << "Enter a number: " ;
    cin >> a;
    for(int i=1; i<=a; i++) {
        for(int j=1; j<=i; j++) {
            cout << "# ";
        }
        cout << endl;
    }

    //------------------------------------

    /* Number Triangle Pattern
    1
    1 2 
    1 2 3
    */
    int b;
    cout << "Enter a number: " ;
    cin >> b;
    for(int i=1; i<=b; i++) {
        for(int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    //------------------------------------

    /* Alphanumeric Triangle Pattern
    1
    A B 
    1 2 3
    A B C D
    1 2 3 4 5
    */
    int c;
    cout << "Enter a number: " ;
    cin >> c;
    for(int i=1; i<=c; i++) {
        for(int j=1; j<=i; j++) {
            if(i%2==0){
                cout << char(j+64) << " ";
            } 
            else{
                cout << j << " ";
            }
            
        }
        cout << endl;
    }

    //------------------------------------

    /* Horizontally-flipped Triangle Pattern
    # # # #
    # # #
    # #
    #
    */
    int d;
    cout << "Enter a number: " ;
    cin >> d;
    for(int i=1; i<=d; i++) {
        for(int j=1; j<=d+1-i; j++) {
            cout << "# ";
        }
        cout << endl;
    }

    //------------------------------------

    /* Horizontally-flipped Triangle Pattern Method 2
    # # # #
    # # #
    # #
    #
    */
    int e;
    cout << "Enter a number: " ;
    cin >> e;
    for(int i=e; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout << "# ";
        }
        cout << endl;
    }

    return 0;
}