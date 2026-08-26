package GeneralProblems;

import java.util.ArrayList;
import java.util.Stack;

public class ToplogicalSorting {

    static void findTopoSort(int node , int [] vis , ArrayList<ArrayList<Integer>>ad, Stack<Integer> st){

        vis[node] = 1;

        for(Integer it : ad.get(node)){
            if(vis[it] == 0 ){
                findTopoSort(it , vis , ad , st);
            }
        }

        st.add(node);

    }

    static ArrayList<Integer> topSort(ArrayList<ArrayList<Integer>> adj){
        int n = adj.size();

        Stack<Integer> st = new Stack<>();

        int [] vis = new int[n];

        for(int i =0 ; i<n ;i++){
            if(vis[i] == 0){
                findTopoSort( i , vis , adj , st);
            }
        }

        ArrayList<Integer> result = new ArrayList<>();

        while(!st.empty()){
            result.add(st.peek());
            st.pop();
        }

        return result;
    }

    public static void main(String[] args){

        int n = 6;

        // 2. Initialize the Adjacency List
        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            adj.add(new ArrayList<>());
        }

        // 3. Add edges to build a Directed Acyclic Graph (DAG)
        // Edges: 5->0, 5->2, 4->0, 4->1, 2->3, 3->1
        adj.get(5).add(0);
        adj.get(5).add(2);
        adj.get(4).add(0);
        adj.get(4).add(1);
        adj.get(2).add(3);
        adj.get(3).add(1);

        ArrayList<Integer>result = topSort(adj);

        System.out.println("Topological Sorting is .. ");
        System.out.println(result);
    }
}
