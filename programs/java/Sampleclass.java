public class Sampleclass{
	public static void main(String ar[]){
		Subsampleclass s1=new Subsampleclass();
		Subsampleclass s2=new Subsampleclass();
		s1.a=10;
		s2.a=50;
		s1.b=60;
		s2.b=15;
		System.out.println("S1-a:"+s1.a+"\nS2-a:"+s2.a+"\nS1-b:"+s1.b+"\nS2-b:"+s2.b);
		s1.display();
		s2.display();
	}
}
		
