#include <iostream>
using namespace std;
const int PI =3.141;

//function prototype (Declaring the function)
double getArea(double radius);

int mai(){
	double radius1 = 1.1, area1, area2;
	//function calling
	area1 = getArea(radius1);
	cout << "Area 1 is " << area1 << endl;
	//function calling again;
	area2 = getArea(2.2);
	cout<< "area 2 is " << area2 << endl;
	//function calling again;
	cout << "Area 3 is " << getArea(3.3) << endl;
	
}

// Function define :
//Return the area of a circle given the radius;

double getArea ( double radius){
	return radius * radius * PI;
}
