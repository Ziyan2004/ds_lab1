#include<iostream>
using namespace std;
class point
{
private:
	float x;
	float y;
public:
	//MIL
	point(float X, float Y) :x(X), y(Y) {}
	//getters
	float getx()const {
		return x;
	}
	float gety()const {
		return y;
	}
	//setters
	void setx(float X) {
		x = X;
	}
	void sety(float Y) {
		y = Y;
	}
	float distance(point& other) {
		float diffx = x - other.x;
		float diffy = y - other.y;
		float dist = sqrt(diffx * diffx + (diffy * diffy));
		return dist;

	}
};
int main() {
	point P1(3.0, 4.0);
	point P2(4.0, 5.0);
	float distance = P1.distance(P2);
	cout << "Distance between p1 and p2 is:" << distance << endl;
	return 0;
}