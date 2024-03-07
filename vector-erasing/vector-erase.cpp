#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n , x ,a, b;
    
    cin >> n;
    vector<long long int> nums; //shoutout to Osama Elzero
    for(int i=0 ; i< n ; i++){
        cin >> x;
        nums.push_back(x);
    }
    
    cin >> x;
    nums.erase(nums.begin()+ (x-1));
    cout << "after erasing first  element : " <<endl ;
    
    for(int i=0 ; i< nums.size() ; i++){
       cout << nums.at(i) << " ";
    }    
    cout << endl ;
    
    cin >> a >> b; 
    nums.erase(nums.begin() + (a-1), nums.begin() + (b-1));
    
    for(int i=0 ; i< nums.size() ; i++){
       cout << nums.at(i) << " ";
    }    
    
    
    return 0;
}
