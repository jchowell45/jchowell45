#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double L;
	double c;
	double r;
	double SA;
	double rh;
	double h = 30;
	double A = 1.5708;
	cout << "What length did you measure (in cm)?" << endl;
	cin >> L;
	c = ((2*L)/A)*sin(A/2);
	r = L/A;
	rh = c/2;
	SA = M_PI*(rh)*(sqrt((rh)*(rh)+(h*h)));
	cout << "Surface area is \n";
	cout << SA << endl;
	
}
	
	
	
	 
	

