#include <iostream>
using namespace std;

class Power;

class Object {
private:
    float speed;
    float force;

public:
    Object(float s, float f) {
        speed = s;
        force = f;
    }

    void display() {
        cout << "Speed: " << speed << ", Force: " << force << endl;
    }

    friend class Power;
};

class Power {
public:
    void applyForce(Object& o, float time) {
        o.speed += o.force * time;
    }

    void changeForce(Object& o, float newForce) {
        o.force = newForce;
    }
};

int main() {
    Object obj(10.0, 2.0);
    Power pwr;

    obj.display();

    pwr.applyForce(obj, 5.0);
    pwr.changeForce(obj, 3.0);

    obj.display();

    return 0;
}

