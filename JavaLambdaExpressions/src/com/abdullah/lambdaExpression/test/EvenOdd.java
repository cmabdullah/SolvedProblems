package com.abdullah.lambdaExpression.test;



public class EvenOdd {
	
	interface Greeting2 {
		//String sayHello(String name);
		boolean check(int a);
	}


	public static void main(String[] args) {
		
		Greeting2 greeting2 = (int id) -> {
			return (id%2 !=0);
		};
		
		

		//System.out.println(greeting2.sayHello("hi cm"));
		
		greet(2, greeting2);
	}
	
	public static void greet(int id, Greeting2 greetings) {// we can parameterized behavior through interface
		//String hello = greetings.sayHello(name);
		boolean flag = greetings.check(id);
		
		System.out.println(flag);
	}

}
