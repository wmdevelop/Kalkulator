#include<iostream>

using namespace std;

double add(double&a,double&b){return a+b;}
double add(double a,double b){return a+b;}


int main(){
	cout<<add(2.11,3.44)<<endl;
}
