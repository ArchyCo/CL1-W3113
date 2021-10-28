#include <iostream>
using namespace std;
//declaring float value for Circumference
float locateCircum(float);

int main() {
    //declaring radius as a float
    float radius;
    //output to ask for the radius
    cout << "Enter the Radius of Circle: ";
    //input for radius
    cin >> radius;
    //output for Circumference
    cout << "\n Circumference of Circle is = " << locateCircum(radius);
    //ending the outputs
    cout << endl;
    return 0;
}
float locateCircum(float r)
{
    //returning value for the Circumference
    return (2*3.14*r);
}