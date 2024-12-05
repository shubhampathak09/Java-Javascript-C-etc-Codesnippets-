#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream inputFile("C:\\Users\\91954\\Documents\\Codes For Javascript Java and C++\\AdventOfCode2024\\in.txt");
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    vector<int> a, b;
    int x, y;

    // Debug line to check if the file is being read
    cout << "Reading file..." << endl;

    while (inputFile >> x >> y) {
        cout << "Read values: " << x << " " << y << endl;  // Debug line to check the values being read
        a.push_back(x);
        b.push_back(y);
    }

    inputFile.close();

 /*   // Just for testing, printing the vectors
    cout << "Vector a: ";
    for (int i : a) {
        cout << i << " ";
    }
    cout << "\nVector b: ";
    for (int i : b) {
        cout << i << " ";
    }

    return 0;
    */
    
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    
    long long sum =0;
    
    for(int i =0 ;i<1000;i++){
    	sum+=abs(a[i]-b[i]);
	}
    
    cout<<sum;
}

