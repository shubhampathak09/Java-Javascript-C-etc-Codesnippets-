public class Snail {

    public static int[] snail(int[][] array) {
     // enjoy
      int [] result=new int[array.length*array[0].length];
      
      int tp=0;
      int bt=array.length;
      int left=0;
      int right=array[0].length;
      
      int k=0;
      
      int dir=0;
      
      while(tp<bt&&left<right){
        
        
        if(dir==0){
          
         for(int i=left;i<right;i++){
           result[k++]=array[tp][i];
         }    
         tp++; 
} else if(dir==1){
          
          for(int i=tp;i<bt;i++){
            result[k++]=array[i][right-1];
          }
          right=right-1;
        }
        else if(dir==2){
          for(int i=right-1;i>=left;i--){
            result[k++]=array[bt-1][i];
          }
          bt=bt-1;
        }
        else{
          for(int i=bt-1;i>=tp;i--){
            result[k++]=array[i][left];
          }
          left=left+1;
        }
        
        dir=(dir+1)%4;
      }
      
      return result;
   } 
}
