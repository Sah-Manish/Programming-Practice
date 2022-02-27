import java.util.Scanner; // import java.util.* here * means all core components are imported

public class datatype {
    public static void main(String[] args) {
        // float basicsalary=8000.00f;
        // float tsal=basicsalary;
        // System.out.println("total salary is::"+tsal);

        // byte n1=10;
        // byte n2=30;
        // byte res1=n1+n2; // error because of the data size sortage byte changes value to int and int has hogher size
        // byte res=(byte)(n1+n2);
        // System.out.println("result::"+res);
        // User input found in 4 ways one is scanner class->java.util package
        Scanner variable = new Scanner(System.in);
        String word=variable.nextLine();
        System.out.println(word);
    }
}
