#include <iostream>
#include <string>
using namespace std;

int main() {
    string a ,b ;
    cin >> a >> b ; 
    
    //printing the size of the two strings
    cout << a.size() << " " << b.size() << endl; 
     
    //printing the concat of the two strings
    cout << a + b <<endl ;
    
    //printing a' and b' 
    char c0 , c1 ; 
    string ap , bp ;
    
    ap = a ; bp = b;
    ap[0] = b[0];
    bp[0] = a[0];
    
    cout << ap <<endl << bp ; 
    
  
    return 0;
}
