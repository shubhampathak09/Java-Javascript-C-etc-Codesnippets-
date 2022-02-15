package HashMapsProblems;

import java.util.HashMap;
import java.util.HashSet;

public class EmployeesUnderaManager {


    private static void findCount(HashMap<String,String> map)
    {
        HashMap<String, HashSet<String>>tree=new HashMap<>();

        String ceo="";

        for(String emp:map.keySet()){
            String man=map.get(emp);

            if(map.equals(emp)){
                ceo=man;
            }else
            {
                if(tree.containsKey(man)){
                    HashSet<String>emps=tree.get(man);
                    emps.add(emp);

                }else
                {
                    HashSet<String>emps=new HashSet<>();
                    emps.add(emp);
                    tree.put(man,emps);
                }
            }

        }


        HashMap<String,Integer>res=new HashMap<>();

        getSize(tree,ceo,res);



    }

    public static void getSize(HashMap<String,HashSet<String>>tree,String ceo,HashMap<String,Integer> map){
  // need to fix the code


        for(String s:tree.keySet()){
            HashSet<String>curr=tree.get(s);
            map.put(s,curr.size());
        }



    }


    public static void main(String[] args){





    }

}
