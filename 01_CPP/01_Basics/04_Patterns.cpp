#include <iostream>
using namespace std;

int main() {
    /*
    # # # #
    # # # #
    # # # #
    */
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout << "# ";
        }
        cout << endl;
    }


    //------------------------------------
    /*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    */
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    //------------------------------------
    /*
    A B C D
    A B C D
    A B C D
    A B C D
    */
    int p;
    cout << "Enter a number: ";
    cin >> p;
    for(int i=1; i<=p; i++) {
        for(int j=1; j<=p; j++) {
            cout << char(64+j) << " ";
        }
        cout << endl;
    }

    /*
    a a a a 
    B B B B
    c c c c
    D D D D
    */
    int m;
    cout << "enter a number: ";
    cin >> m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            if(i%2==0){
                cout << char(i+64) << " ";
            }
            else{
                cout << char(i+96) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}