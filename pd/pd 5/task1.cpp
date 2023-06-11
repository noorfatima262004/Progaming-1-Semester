#include<iostream>
using namespace std;
float pyramid(float length, float height, float width);
main()
{
	float length,width,height,op;
	string units;


	cout << " Enter the length of pyramind in meters=";
	cin >> length;
	cout << " Enter the width of pyramid in meters=";
	cin >> width;
	cout << " Enter the height of pyramid in meters=";
	cin >> height;
	cout << " enter units=";
	cin >> units;
	

	cout << " Press 1 for millimeter."<< endl;
	cout << " Press 2 for centimeter."<< endl;
	cout << " Press 3 for kilometer."<< endl;
	cout << " Press 4 for meter."<< endl;
	cin >> op;
	
	if(op == 1)
	{
	 float vol = pyramid(length,height,width);
	 vol = vol* 1000 * 1000 * 1000;
	 cout << "the volume of pyramid is =" << vol << "cubic millimeters" << endl;
	}
	
	if(op == 2)
	{
	 int  vol = pyramid(length,height,width);
	 vol = vol* 100 * 100 * 100;
	cout << "the volume of pyramid is =" << vol << "cubic centimeters"  << endl;
	}
	
	if(op == 3)
	{
	 float vol = pyramid(length,height,width);
	 vol = vol/1000/1000/1000;
	 cout << "the volume of pyramid is =" << vol << "cubic killometers"   << endl;
	}
	
	   if(op == 4)
	{
	int vol =  pyramid(length,height,width);
	cout << "the volume of pyramid is =" << vol << "cubic meters" << endl;

	}

	
}
float pyramid(float length, float heigth, float width)
{
	float volume = (length* heigth * width)/3;
	return volume;
}
	


	
	
	