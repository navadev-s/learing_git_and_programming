import java.util.Scanner;
public class FunctionSample{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter 2 numbners :");
		int num1=sc.nextInt();
		int num2=sc.nextInt();
		int r=sum(num1,num2);
		System.out.println("Sum = "+r);
	}
	static int sum(int a,int b){
		int sum=a+b;
		return sum;
	}
} 
