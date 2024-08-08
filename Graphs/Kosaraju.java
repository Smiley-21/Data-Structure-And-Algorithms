import java.util.*;

class Kosaraju {

    private void revDfs(int node, ArrayList<ArrayList<Integer>> transpose, int vis[]) {
        vis[node] = 1;
        System.out.println(node + " ");
        for (Integer it : transpose.get(node)) {
            if (vis[it] == 0)
                revDfs(it, transpose, vis);
        }
    }

    void dfs(int node, Stack<Integer> st, ArrayList<ArrayList<Integer>> adj, int vis[]) {
        vis[node] = 1;
        for (Integer it : adj.get(node)) {
            if (vis[it] == 0)
                dfs(it, st, adj, vis);
        }
        st.push(node);
    }

    void KosaRaju(ArrayList<ArrayList<Integer>> adj, int n) {
        int vis[] = new int[n];
        Stack<Integer> st = new Stack<Integer>();
        for (int i = 0; i < n; i++) {
            if (vis[i] == 0)
                dfs(i, st, adj, vis);
        }

        ArrayList<ArrayList<Integer>> transpose = new ArrayList<ArrayList<Integer>>();
        for (int i = 0; i < n; i++) {
            transpose.add(new ArrayList<Integer>());
        }
        for (int i = 0; i < n; i++) {
            vis[i] = 0;
            for (Integer it : adj.get(i))
                transpose.get(it).add(i);
        }
        while (st.size() > 0) {
            int node = st.peek();
            st.pop();
            if (vis[node] == 0) {
                System.out.println("SCC : ");
                revDfs(node, transpose, vis);
                System.out.println();
            }
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>();
        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            adj.add(new ArrayList<Integer>());
            adj.get(a).add(b);
        }
        sc.close();

        Kosaraju obj = new Kosaraju();
        obj.KosaRaju(adj, n);

    }
}