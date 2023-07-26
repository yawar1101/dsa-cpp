#include<iostream>
#include<cmath>

using namespace std;

class Point {
    int x, y;
    public:
        Point(int a, int b) {
            x = a;
            y = b; 
        }

        void display() {
            cout << "Point on the plane is: " << "(" << x << ", " << y << ")" << endl;
        }

    friend void computeDistance(Point, Point);
};

// Compute distance between 2 points

void computeDistance(Point p1, Point p2) {
    int xdiff = p2.x - p1.x;
    int ydiff = p2.y - p1.y;
    double diff = sqrt(pow(xdiff, 2) + pow(ydiff, 2));
    cout << "Distance between 2 points is: " << diff << endl;
}

int main() {
    Point obj1(3, 4);
    Point obj2(5, 6);

    cout << "Points are : ";
    obj1.display();
    cout << "Points are : ";
    obj2.display();

    computeDistance(obj1, obj2);

    // obj1.display();
    return 0;
}