#include <iostream>
using namespace std;

// Function to check quadrant
void quadrant(int x, int y)
{

	if (x > 0 and y > 0)
		cout << "lies in First quadrant";

	else if (x < 0 and y > 0)
		cout << "lies in Second quadrant";

	else if (x < 0 and y < 0)
		cout << "lies in Third quadrant";

	else if (x > 0 and y < 0)
		cout << "lies in Fourth quadrant";

	else if (x == 0 and y > 0)
		cout << "lies at positive y axis";

	else if (x == 0 and y < 0)
		cout << "lies at negative y axis";

	else if (y == 0 and x < 0)
		cout << "lies at negative x axis";

	else if (y == 0 and x > 0)
		cout << "lies at positive x axis";

	else
		cout << "lies at origin";
}

// Driver code
int main()
{
	int x,y;
	cout<<"Enter x & y coordinates ";
	cin>>x>>y;
	
	quadrant(x, y);
	return 0;
}



