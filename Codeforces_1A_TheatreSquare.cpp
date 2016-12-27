/*
Author : hardRocK
Date :
Online Judge : Codeforces
Problem Name : Theatre Square
Problem Link : http://codeforces.com/problemset/problem/1/A
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

	double n, m, a;
	cin >> n >> m >> a;
	
	cout << (long long)ceil((n / a) * 1.0) * (long long)ceil((m / a) * 1.0 ) << endl;
	
    return 0;
}


