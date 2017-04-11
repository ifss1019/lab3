#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main (int argc, char *argv[]){
    int num;
    vector<int> cow;
    int in;
    int sum=0;

    ifstream inFile("file.in", ios::in);
    if (!inFile){
	cerr << "Open Failed" << endl;
	exit(1);
    }
    inFile >> num;
    for (int i=0; i<8; ++i){
	inFile >> in;
	cow.push_back(in);
    }

    sort(cow.begin(),cow.end());
    for (int i=3; i<8; ++i)
	sum += cow[i];

    ofstream outFile("file.out", ios::out);
    outFile << sum;
}
