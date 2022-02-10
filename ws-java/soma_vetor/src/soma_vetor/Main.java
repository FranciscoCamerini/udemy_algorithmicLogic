package soma_vetor;

import java.util.Locale;
import java.util.Scanner;



public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double soma, media;
		soma = 0;
		int n;
		
		System.out.print("Quantos numeros voce vai digitar? ");
		n = sc.nextInt();
		double [] vet = new double[n];
		System.out.println();
		
		
		for (int i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextDouble();
			soma = soma + vet[i];
		}
		
		media = soma / n;
		
		System.out.print("VALORES = ");
		
		for (int i = 0; i < n; i++) {
			System.out.print(String.format("%.1lf ", vet[i]));			
		}
		
		System.out.printf("\nSOMA = ", soma);
		System.out.printf("\nMEDIA = ", media);
		
		
		sc.close();
	}

}
