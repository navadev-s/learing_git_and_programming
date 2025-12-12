import java.util.Scanner;
public class Numbers{
	public static void main(String ar[]){
		Scanner s=new Scanner(System.in);
		System.out.println("Enter 2 numbers : ");
		int a=s.nextInt();
		int b=s.nextInt();
		int c=a+b;
		System.out.println("Sum = "+c);
	}
}
