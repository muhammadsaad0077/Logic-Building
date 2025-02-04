#include<iostream>
using namespace std;

void circular(int *, int *, int *);

int main(){
    int x = 5;
    int y = 8;
    int z = 10;

    int *x_ptr = &x;
    int *y_ptr = &y;
    int *z_ptr = &z;

    cout<<"The value before swapping, x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    circular(x_ptr, y_ptr, z_ptr);
    cout<<"The value after swapping, x = "<<x<<" y = "<<y<<" z = "<<z;

}
void circular(int *x, int *y, int *z){
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}
