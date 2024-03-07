#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n , q , x , y, p=0;
    vector<long> nums; 
	//cout << "whats the number of element in the table \n";
    cin >> n ; //cout << "insert "<<n<<" elements of vector : " << endl ; 
    
	for(long i = 0 ; i<n ; i++){
        cin >> x; 
        nums.push_back(x);
    }
    
    //cout << "the size of this vector is : " << nums.size() << endl  ;
   
   
    
    
    
    //cout << "whats the number of queries" <<endl ;
	cin >> q ; 
	
	
    for(long j=0 ; j < q ; j++){
    	//cout << "give the number : " << endl ; 
        cin >> y; 
    	vector<long> smaller = lower_bound ( nums.begin() , nums.end() ,y ); 
        
        if( smaller != nums.end() && *smaller ==y)
        	cout << "Yes " << (smaller - nums.begin()) + 1 << endl; 
        
        else 
        	cout << "No " << (smaller - nums.begin()) + 1 << endl; 
        	
		}
		
	}
            
		
        
    
        
        
    
    


