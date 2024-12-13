#include<iostream>
using namespace std;



/*int fun(int m, int n)
{
while (n != m)
{

if (n > m){

n = n - m;
cout<<"The value of n is "<<n<<endl;

}

else if (m > n){

m = m - n;
cout<<"The value of m is "<<m<<endl;

}
}
return n;
}*/



int main()
{
// int z = 5, j = 7, k = 6, n = 3;
// cout << z + j % k + k * n - 15 << endl;  // 9
// cout << z % n + 5 << endl;   // 7


// int i = 12, counter = 5;
// while ((i - 1))
// {
// ++counter;
// i--;
// }
// cout<<counter;   // 16

// cout << fun(88, 33) << endl;
// cout << fun(172,140)<<endl;

// int x = 5;
// int y = 10;
// int z = ++x * y--;
// cout<<(z+y);  // 69

int p = 23.24 ;
int *q, **r ;
q = &p ;
r = &q ;
printf ( "%d %d\n", *q, **r ) ;

return 0;
}

