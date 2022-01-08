package HashMapsProblems;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class KillProcess {


    //ex-1


 /*
    pid=[1,3,10,5,20,40]
    ppid=[3,0,5,3,10,20]

     kill =5   ->[5,10,20,40]

      |
      3
     / \
    1    5
         /
        10
       /
      20
       \
       40


  */

// create parent child map

 /*
 3-[1,5]
 5 [10]
 10 [20]
 20 [40]

 // reecursively call execute kill process
  */


    public static ArrayList<Integer> killProcess(ArrayList<Integer> pid, ArrayList<Integer> ppid, int kill) {


        ArrayList<Integer> res = new ArrayList<>();  //[5,10,20,40]

        Map<Integer, ArrayList<Integer>> mp = parentChildMap(pid, ppid);

        executeKill(res, mp, kill);

        return res;

    }

    public static Map<Integer, ArrayList<Integer>> parentChildMap(ArrayList<Integer> pid, ArrayList<Integer> ppid) {

        Map<Integer, ArrayList<Integer>> map = new HashMap<>();

        for (int i = 0; i < pid.size(); i++) {
            Integer currProcess = pid.get(i);
            Integer parProcess = ppid.get(i);


            ArrayList<Integer> children;

            if (map.containsKey(parProcess)) {
                children = map.get(parProcess);
            } else {
                children = new ArrayList<>();
                map.put(parProcess, children);
            }
            children.add(currProcess);
        }


        return map;
    }


    public static void executeKill(ArrayList<Integer> result, Map<Integer, ArrayList<Integer>> map, int kill) {


        result.add(kill);

        if (!map.containsKey(kill)) {
            return;
        }

        for (Integer child : map.get(kill)) {
            executeKill(result, map, child);
        }

    }

    public static void main(String[] args) {

        // Inputs

        // test case 1

        ArrayList<Integer> pid = new ArrayList<Integer>() {
            {
                add(1);
                add(3);
                add(10);
                add(5);
                add(20);
                add(40);
            }
        };

        ArrayList<Integer> ppid = new ArrayList<Integer>() {
            {
                add(3);
                add(0);
                add(5);
                add(3);
                add(10);
                add(20);
            }
        };


        int kill = 5;


        ArrayList<Integer> ans = killProcess(pid, ppid, kill);

        for (Integer x : ans) {
            System.out.print(x + " ");
        }

        System.out.println();

        System.out.println(ans.size());

    }

}
