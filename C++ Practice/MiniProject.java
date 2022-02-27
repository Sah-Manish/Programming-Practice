// Mini Project
import java.util.Scanner;
public class MiniProject {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
        int length=7, ele, positionT1, positionT2=-1;
		int[] EmpNo = new int[] {1001, 1002, 1003, 1004, 1005, 1006, 1007};
		String[] EmpName = new String[] {"Ashish", "Sushma", "Rahul", "Chahat", "Ranjan", "Suman", "Tanmay"};
		String[] JoinDate = new String[] {"01/04/2009", "23/08/2012", "12/11/2008", "29/01/2013", "16/07/2005", "01/01/2000", "12/06/2006"};
		String[] DesignationCode = new String[] {"e", "c", "k", "r", "m", "e", "c"};
        String[] Department = new String[] {"R&D", "PM", "Acct", "Front Desk", "Engg", "Manufacturing", "PM"};
        int[] Basic = new int[] {20000, 30000, 10000, 12000, 50000, 23000, 29000};
        int[] HRA = new int[] {8000, 12000, 8000, 6000, 20000, 9000, 12000};
        int[] IT = new int[] {3000, 9000, 1000, 2000, 20000, 4400, 10000};
        // new table
        String[] DesignationCodeT2 = new String[] {"e", "c", "k", "r", "m"};
        String[] Designation = new String[] {"Engineer", "Consultant", "CLerk", "Receptionist", "Manager"};
        int[] DA = new int[] {20000, 32000, 12000, 15000, 40000};
		ele=sc.nextInt();
		positionT1=search(EmpNo, ele, length);
		if(positionT1==-1){
			System.out.println("There is no employee with empid : "+ele);
		}
		else{
			for(String x:DesignationCodeT2){
				positionT2+=1;
				if(DesignationCode[positionT1]==x){
					break;
				}
			}
			System.out.println("Emp No.\tEmp Name\tDepartment\tDesignation\tSalary");
			int tSalary = Basic[positionT1] + HRA[positionT1] + DA[positionT2] - IT[positionT1];
			String ans = ele + "\t" +EmpName[positionT1] + "\t\t" + Department[positionT1] + "\t\t" + Designation[positionT2] + "\t\t" + tSalary;
			System.out.println(ans);
			
		}
		sc.close();
	}
	// Searching emp id in emp id array and returning the position
	public static int search(int[] arr, int EmpNo, int length) {
		int flag=0,pos=-1;
		for(int i=0; i<length; i++) {
			if(arr[i]==EmpNo) {
				flag=1;
				pos=i;
			}
		}
		if(flag==0) {
			return -1;
		}
		else {
			return pos;
		}
	}
}
