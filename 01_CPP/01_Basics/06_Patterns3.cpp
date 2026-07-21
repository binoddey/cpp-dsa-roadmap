#include <iostream>
using namespace std;

int main() {
    /* Hollow Rectangle Pattern
    # # # #
    #     #
    # # # #
    */
    int l, b;
    cout << "Enter length: " ;
    cin >> l;
    cout << "Enter breadth: " ;
    cin >> b;
    for(int i=1; i<=b; i++) {
        for(int j=1; j<=l; j++) {
            if(i==1 || i==b || j==1 || j==l){
                cout << "# ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    //------------------------------------

    /* Cross Pattern
    #       #
      #   #
        #
      #   #
    #       #
    */
    int n;
    cout << "Enter num: " ;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i+j == n+1 || i==j){
                cout << "# ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    //------------------------------------

    /* Floyd's Triangle Pattern
    1
    2 3
    4 5 6
    7 8 9 10
    */
    int x;
    cout << "Enter num: " ;
    cin >> x;
    int a = 1;
    for(int i=1; i<=x; i++) {
        for(int j=1; j<=i; j++) {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }

    return 0;
}