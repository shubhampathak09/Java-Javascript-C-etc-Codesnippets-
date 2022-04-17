/*
We want to approximate the length of a curve representing a function
 y = f(x) with a <= x <= b. First, we split the interval [a, b] into n sub-intervals with widths h1, h2, ... , hn 
 by defining points x1, x2 , ... , xn-1 between a and b. 
 This defines points P0, P1, P2, ... , Pn on the curve whose x-coordinates are a, x1, x2 , ... , xn-1, b and y-coordinates
  f(a), f(x1), ..., f(xn-1), f(b) . By connecting these points, 
  we obtain a polygonal path approximating the curve.

Our task is to approximate the length of a parabolic arc representing the curve y = x * x with x in the interval [0, 1].
 We will take a common step h between the points xi: h1, h2, ... , hn = h = 1/n and we will consider
  the points P0, P1, P2, ... , Pn on the curve. The coordinates of each Pi are (xi, yi = xi * xi).

The function len_curve (or similar in other languages) takes n as parameter (number of sub-intervals)
 and returns the length of the curve.
 */
 
 #include<bits/stdc++.h>
 using namespace std;
 
 double lambda(double x){
 	return x*x;
 }
 
 double lenCurve(int n){
 	
 //	cout<<n<<endl;
 	
 	double h= (double)1/n;
 	
 //	cout<<h;
	  	
 	double dist=0;
 	
 	double s=0;
 	
 	double x1=0;
 	double y1=0;
 	
 	double x2=0;
 	double y2=0;
 	
 	while(x2<=1){
 	
// 	cout<<x2<<" "<<h<<endl;
//	 	 	
 	 x2=x2+h;
	if(x2>1) break;
	y2=lambda(x2);
	
    	cout<<x2<<" "<<y2<<endl;;
	
	dist+=sqrt(abs(x2-x1)*abs(x2-x1)+abs(y2-y1)*abs(y2-y1)); 	
 	
	 x1=x2;
	 y1=y2;
	 	
	 }
	 
	 return dist;
 }
 
 int main(){
 	
 	
 	int x=lenCurve(10); 	
 
    
 
 //
 	printf("%0.6f",lenCurve(47541));
 	
 	// dotest(10, 1.478197397);1.478197397
 	
 	
 	
 	
 }//?gg
 
 /*
 0.1 0.01
0.2 0.04
0.3 0.09
0.4 0.16
0.5 0.25
0.6 0.36
0.7 0.49
0.8 0.64
0.9 0.81
1 1
0.1 0.01
0.2 0.04
0.3 0.09
0.4 0.16
0.5 0.25
0.6 0.36
0.7 0.49
0.8 0.64
0.9 0.81
1 1
1.478197397
--------------------------------
*/
