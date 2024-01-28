#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int t[n];
    cout<<"the values of the array are:\n";
    for(int i=0;i<n;i++)
    {
    	cin>>t[i];
	}
	cout<<"the reverse of the array is \n";
	reverse(t,t+n);
    for(int i=0;i<n;i++)
    {
    	cout<<t[i]<<" ";
	}
    
    
    
    
    return 0;
}

