#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    map<string , int > studentCheet ;
    int q ,   y ; 
    string x;
    short type ;
    
    cin >> q ; 
    
    for(int i=0 ; i < q ; i++){
        cin >> type ; 
        
        if(type == 1 ){
            cin >> x >> y;
            // if found : 
            map<string , int >::iterator ite = studentCheet.find(x);
            if(ite != studentCheet.end())
                studentCheet[x] += y; 
            // if not found : 
            else
                studentCheet.insert(make_pair(x, y));
        }
        
        if(type == 2 ){
            cin >> x ;
            studentCheet[x] = 0;
        }
        
        if(type == 3 ){
            cin >> x ;
            if(studentCheet[x]!=0 )
                cout << studentCheet[x] << endl ;
            else 
                cout << "0\n" ;
        }
        
    }
    
    
    
    return 0;
}




