#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q ;
    cin >> q ;
    //giving a set s
    set<int> s ; //declaring a set
    
    for(int i=0 ; i < q ; i++ )
    {
        long long int test;   //test is the a value either 1 , 2 or 3
        cin >> test;

        int x ;
        cin>>x ;
        
        if (test == 1)  {
            s.insert(x); //if =1 , x is inserted
        }
        
        else if (test == 2)  {
            set<int>::iterator it=s.find(x);//iterator looking for x
            if(*it == x)   s.erase(x); //if it finds it then erase
            //else return 0 ; //else do nothing 
        }
        
        else if (test == 3)  {
             //if =3 ,printing "yes" if its found or "no" if not
            set<int>::iterator it=s.find(x);//iterator looking for x
            if(*it == x){
                cout << "Yes\n";
            }
            else cout << "No\n";         
        } 
    }
    
    
    
    
    return 0;
}



