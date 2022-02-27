import java.util.Scanner;
public class practice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num=sc.nextInt();
        System.out.println("Average is: "+factorial(num));
        sc.close();
    }
    public static float average(int num){
        float ans=0.0f;
        for(int i=0;i<=num;i++){
            ans+=num;
        }
        return ans/num;
    }
    public static int factorial(int num){
        if(num==1){
            return 1;
        }
        else{
            return num*factorial(num-1);
        }
    }
    
}
