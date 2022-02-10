
	import java.util.Scanner;

public class Main {

	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Dados da primeira pessoa");
		System.out.print("Nome: ");
		String nome1 = sc.nextLine();
		System.out.print("Idade: ");
		double idade1 = sc.nextDouble();
		sc.nextLine();
		System.out.println();
		
		
		System.out.println("Dados da segunda pessoa");
		System.out.print("Nome: ");
		String nome2 = sc.nextLine();
		System.out.print("Idade: ");
		double idade2 = sc.nextDouble();
		System.out.println();
		
		
		double media = (idade1 + idade2)/2;
		
		
		System.out.println("A idade media de " + nome1 + " e " + nome2 + " eh de " + media + " anos.");
		System.out.println();
		
		
	}
	
}
