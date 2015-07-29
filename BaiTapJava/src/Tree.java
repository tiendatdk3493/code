import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Vector;

/**
 * Created by 1.1.1.1 on 7/25/2015.
 */
public class Tree {
    private Integer label;
    private Tree []child;
    public static Vector step;
    public static BufferedWriter writer;

    public Tree() throws IOException {
        label = 0;
        child = new Tree[5];
        child[0] = null;
        child[1] = null;
        child[2] = null;
        child[3] = null;
        child[4] = null;
        step = new Vector <Integer>();
        writer = new BufferedWriter(new FileWriter(new File("out.txt")));
    }

//    public Tree(int n) {
//        label = new int[n];
//        maxNode = n;
//        parent = new int[n];
//    }
//
//    public int getLabel(int i) {
//        return label[i];
//    }
//
//    public int getMaxNode() {
//        return maxNode;
//    }
//
//    public int getParent(int i) {
//        return parent[i];
//    }
//

    public void setLabel(Integer label) {
        this.label = label;
    }

    public void setChild(int p, Tree tree) throws IOException {
        tree = new Tree();
        child[p] = tree;
    }
    public void createTree(Integer root, Vector <Integer> A) throws IOException {
        if(A.size() == 1){
            if(Math.abs(A.get(0) - root) < 4) {
                Tree treeTemp = new Tree();
                treeTemp.setLabel(A.firstElement());
                this.child[0] = treeTemp;
            }
        } else {
            int i = 0;
            int t = 0;
            while (i < A.size()) {
                if(Math.abs(A.get(i) - root) < 4) {
                    Tree treeTemp = new Tree();
                    treeTemp.setLabel(A.get(i));
                    this.child[t] = treeTemp;

                    Vector B = new Vector<Integer>();
                    for (int k = 0; k < A.size(); k++) {
                        B.insertElementAt(A.get(k), k);
                    }
                    Integer subRoot = (Integer) B.get(i);
                    B.remove(subRoot);
                    treeTemp.createTree(subRoot, B);
                    t++;
                    i++;
                } else {
                    i++;
                }
            }
        }
    }

    public void steps(int n) throws IOException {
        if(this.child[0] == null){
            Integer lastElement = (Integer) step.lastElement();
            if((n - lastElement) < 4 && step.size() == n-2) {
                //System.out.print("1->");
                writer.write(1 + "->");
                for (int i = 0; i < step.size(); i++) {
                    //System.out.print(step.get(i) + "->");
                    writer.write(step.get(i) + "->");
                }
                writer.write(n + "");
                writer.newLine();
                //System.out.println(n);
            }
        } else {
            int i = 0;
            while (i < 5 && this.child[i] != null) {
                step.add(this.child[i].label);
                this.child[i].steps(n);
                step.remove(this.step.lastElement());
                i++;
            }
        }
    }

    public static void main(String[] args) throws IOException {
        Tree tree = new Tree();
        Vector A = new Vector<Integer>();
        int n = 11;
        for(int i = 0; i < n-1; i++) {
            A.insertElementAt(i+1, i);
        }
        Integer root = (Integer) A.firstElement();
        A.remove(root);
        tree.setLabel(root);
        tree.createTree(root, A);
        tree.steps(n);
        writer.close();
    }
}
