// 

#include<bits/stdc++.h>
using namespace std;


int solveNet(int loc,vector<int>mag){
	
	
	float netright= 
	float netleft=
	
	float net =netright-netleft
	
	if(net>0){
		
	}
}



class Solution {
    
    
    private static double getSum(int low, int high, double eq, double magnets[])
    {
        double sum = 0.0;
        
        for(int i=low; i<high; i++)
        {
            sum += 1/(Math.abs(eq-magnets[i]));
        }
        
        
        return sum;
        
        
    }
    
    private static double findEquiPoint(int sp, double magnets[], int n)
    {
        double left = magnets[sp-1];
        double right = magnets[sp];
        // System.out.println((left+right)/2);
        while(left<=right)
        {
            
            double eq = (left+right)/2;
            
            double lsum = getSum(0, sp, eq, magnets);
            double rsum = getSum(sp, n, eq, magnets);
            
            
            if(Math.abs(rsum-lsum)<0.000001) return eq;
            
            else if(lsum>rsum)
            {
                left = eq;
            }
            else
            {
                right = eq;
            }
            
        }
        
        return (right+left)/2;
        
        
    }
    
    public void nullPoints(int n, double magnets[], double getAnswer[])
    {
        
        for(int i=1; i<n; i++)
        {
            getAnswer[i-1] = findEquiPoint(i, magnets,  n);
        }
        
    }
}
