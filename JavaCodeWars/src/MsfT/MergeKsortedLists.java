package MsfT;

import java.util.ArrayList;
import java.util.PriorityQueue;

public class MergeKsortedLists {

    public static class Pair implements Comparable<Pair>{

        int li;
        int di;
        int val;

        Pair(int li,int di,int val){
            this.li=li;
            this.di=di;
            this.val=val;
        }

        @Override
        public int compareTo(Pair o) {
            return this.val -  o.val;
        }
    }

    public static void main(String[] args)
    {

        ArrayList<Integer>rv=new ArrayList<>();

        ArrayList<ArrayList<Integer>>list=new ArrayList<>();


        PriorityQueue<Pair>pq=new PriorityQueue<>();

        for(int i=0;i<list.size();i++){

            Pair p=new Pair(i,0,list.get(i).get(0));
            pq.add(p);
        }
        while(pq.size()>0){
            Pair p=pq.remove();

              rv.add(p.val);

              p.di++;

              if(p.di<list.get(p.li).size()){
                  p.val=list.get(p.li).get(p.di);
                  pq.add(p);
              }


        }

    }
}
