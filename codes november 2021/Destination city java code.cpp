class Solution {
    public String destCity(List<List<String>> paths) {
     
        
        HashMap<String,ArrayList<String>>hm=new HashMap<>();
        
        for(int i=0;i<paths.size();i++){
            
            String sourceCity=paths.get(i).get(0);
            String destCity=paths.get(i).get(1);
            
            ArrayList<String>children;
            
            
            if(hm.containsKey(sourceCity)){
                children=hm.get(sourceCity);
            }else
            {
                children=new ArrayList<>();
                hm.put(sourceCity,children);
            }
            children.add(destCity);
        }
        
        
        for(String s:hm.KeySet()){
            
            if(hm.get(s).size()==0){
                return s;
            }
        }
        
    }
}


// do not run if not noob
