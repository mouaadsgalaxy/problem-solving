#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    long q ;
    cin >> q ;
    //giving a set s
    set<long> s ; //declaring a set
    
    for(long i=0 ; i < q ; i++ )
    {
        long test;   //test is the a value either 1 , 2 or 3
        cin >> test;
        
        if (test == 1)  {
            long x ; 
            cin >> x;
            s.insert(x); //if =1 , x is inserted
        }
        
        else if (test == 2)  {
            long x ;
            cin>>x ;    //if =2 , x is erased (only if found)
            set<long>::iterator it=s.find(x);//iterator looking for x
            if(*it == x)   s.erase(x); //if it finds it then erase
            //else return 0 ; //else do nothing 
        }
        
        else if (test == 3)  {
            long x ;
            cin>>x ; //if =3 ,prlonging "yes" if its found or "no" if not
            set<long>::iterator it=s.find(x);//iterator looking for x
            if(*it == x){
                cout << "Yes\n";
            }
            else cout << "No\n";         
        } 
    }
    
    
    
    
    return 0;
}



