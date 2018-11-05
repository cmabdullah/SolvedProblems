package com.abdullah.lambdaExpression.test;

import java.util.Scanner;

import com.abdullah.lambdaExpression.PerformOperation;

public class Palindrome {

	interface Greeting2 {
		// String sayHello(String name);
		boolean check(int a);
	}

	public static void main(String[] args) {

		Greeting2 greeting2 = (int id) -> {

			
			
				StringBuilder original = new StringBuilder();
				StringBuilder reverse = new StringBuilder();
				
				original.append(id).toString();
				
				reverse = original.reverse();
				
				if (original.equals(reverse))
					return true;
				return false;
		};

		//greet(345, greeting2);
		
		
		int id = 122;
		StringBuilder original = new StringBuilder();
		StringBuilder reverse = new StringBuilder();
		
		original.append(id);
		System.out.println("original : "+original);
		
		reverse = original.reverse();
		System.out.println("reverse : "+reverse);
		
		if (original.toString() == (reverse.toString()))
			System.out.println("Palindrom");
		
	}

	public static void greet(int id, Greeting2 greetings) {// we can parameterized behavior through interface
		// String hello = greetings.sayHello(name);
		boolean flag = greetings.check(id);

		System.out.println(flag);
	}

}
