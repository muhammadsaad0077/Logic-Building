#include<iostream>
#include<cmath>
using namespace std;
void calculateArea(int *,float *,float *,float *);


int main(){
    int plot[6] = {1, 2, 3, 4, 5, 6};
    float a[6] = {70.4, 30.2, 65.7, 83.2, 58.4, 73.1};
    float b[6] = {80.4, 40.2, 55.7, 63.2, 78.4, 63.1};
    float angle[6] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};

    calculateArea(plot, a, b, angle);
    

}

void calculateArea(int *plot, float *a, float *b, float *angle){

    for(int i = 0; i < 6; i++){
        float area = (1.0 / 2.0) * *(a + i) * *(b + i) * sin(*(angle + i));
        cout<<"The area of plot "<<i+1<<" is "<<area<<endl;
        
    }

}