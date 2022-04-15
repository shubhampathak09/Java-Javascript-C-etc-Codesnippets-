public class Xbonacci {

  public double[] tribonacci(double[] s, int n) {
      // hackonacci me
 
    if(n==0)
      return new double[]{};
    
    if(n==1)
    return new double[]{s[0]};
    
    if(n==2)
      return new double[]{s[0],s[1]};
    
    if(n==3)
      return new double[]{s[0],s[1],s[2]};
    
    double[] dp=new double[n];
    
    dp[0]=s[0];
    dp[1]=s[1];
    dp[2]=s[2];
    
    for(int i=3;i<n;i++){
      
      dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
 return dp;
}
  }
