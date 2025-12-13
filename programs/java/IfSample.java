import java.util.Scanner;
public class IfSample{
	public static void main(String ar[]){
		Scanner s=new Scanner(System.in);
		System.out.println("Enter a number : ");
		int n=s.nextInt();
		if(n<0){
			System.out.println("Negative Number.");
		}
		else{
			System.out.println("Postive Number");
		}
	}
}
