#include<iostream>
using namespace std;
float circarea(float r){
    const float PI =  3.141;
    return PI * r * r;
}
int main(){
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area is " << circarea(radius) << endl;
    return 0;
}