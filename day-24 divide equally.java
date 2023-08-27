/*
The program must accept four positive integers as the input. The program must divide the four integers into two parts and print YES if the sum of integers in the first part is equal to the sum of integers in the second part. Else the program must print NO as the output.

Boundary Condition(s): 1 <= Each integer value <= 10^8

Input Format:
	The first line contains four positive integers separated by a space.
Output Format:
	The first line contains YES or NO.
	
	Example Input/Output 1:
		Input 
			1 7 11 5
		Output 
			YES
	Example Input/Output 2:
		Input 
			7 3 2 5
		Output 
			NO
*/




//answer
import java.util.*;

public class Hello 
{
	public static void main(String[] args) 
	{
		Scanner sc new Scanner(System.in);
		int a sc.nextInt(),b sc.nextInt(); 
		int csc.nextInt(),d sc.nextInt();
		if(a+b==c+d || a+c==b+d || a+d==b+c || a+b+c==d || a+b+d==c || b+c+d==a || a+c+d==b) 
			System.out.print("YES") 
		else 
			System.out.print("NO"); 
	}
}