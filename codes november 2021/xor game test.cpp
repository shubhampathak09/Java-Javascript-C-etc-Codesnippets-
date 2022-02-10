// xor game

anantkumawat10110
17 minutes ago

C++ Solution.

int xorCal(int k){
    if(k == 1) return 2;
    if((k & (k + 1)) == 0) return k >> 1;
    return -1;
}
0

yadavdheeraj2002
19 minutes ago

c++ 

int xorCal(int k){
        // code here
        if(k%2==0){
            return -1;
        }
        else{
            if(k==1){
                return 2;
            }
            int n1=k/2,n2=(k-n1);
             n1=log2(n1); n2=log2(n2);
            if(n1!=n2){
                return k/2;
            }
            else{
                return -1;
            }
        }
    }
0

bigo
21 minutes ago

Java one-liner: return k == 1 ? 2 : k%2 == 0 ? -1 : ((k/2) ^ (k/2 + 1)) == k ? k/2 : -1;

+1

iwritecode99
28 minutes ago

C++ Two Solutions - 0.0s: Github Link

Little tricky to understand, try dry running for few n numbers-

    

      n ^ (n+1) = k

      1 ^ 2 = 3

      2 ^ 3 = 1

      3 ^ 4 = 7

      4 ^ 5 = 1

      5 ^ 6 = 3

      6 ^ 7 = 1

      7 ^ 8 = 15

      8 ^ 9 = 1

      9 ^ 10 = 3

 

      for 3 & 4 (bitwise AND)

      011 & 100 = 000

      k & (k+1) = 0, so answer will be n / 2 (=1)

      

      for 7 & 8 

      0111 & 1000 = 0000

      k & (k+1) = 0, so answer will be n / 2 (=3)

      

      for 15 & 16

      01111 & 10000 = 00000

      k & (k+1) = 0, so answer will be n / 2 (=7)

    

      for any k - the minimum n is k / 2, if k & (k+1) == 0

 

 int xorCal(int k) {
      // using loop
      
      for(int i=1;i<=100; i++)
         if((i ^ (i+1)) == k)
             return i;
      return -1;
     
      // without loop
      
      // even numbers give k==1, minimum is 2;
      if (k == 1) return 2;
      if ((k & (k + 1)) == 0) return k / 2;
      else return -1;
    }
    
    
