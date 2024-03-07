#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n ; 
    int a, b;
    cin >> n;
    int x;
    vector<int> nums; //shoutout to Osama Elzero
    for(int i=0 ; i< n ; i++){
        cin >> x;
        nums.push_back(x);
    }

    cin >> x;
    nums.erase(nums.begin()+ x);
    cin >> a >> b; 
    nums.erase(nums.begin() + a ,nums.begin() + b);
    
    cout << nums.size() <<endl; 
    for(int i=0 ; i< n ; i++){
       cout << nums.at(i) << " ";
    }    
    
    
    return 0;
}
