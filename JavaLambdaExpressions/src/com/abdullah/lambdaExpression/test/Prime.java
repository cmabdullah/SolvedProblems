package com.abdullah.lambdaExpression.test;

public class Prime {

	interface Greeting2 {
		// String sayHello(String name);
		boolean check(int a);
	}

	public static void main(String[] args) {

		Greeting2 greeting2 = (int id) -> {

			int num = id;
	        boolean flag = false;
	        for(int i = 2; i <= num/2; ++i){
	            // condition for nonprime number
	            if(num % i == 0){
	                flag = true;
	                System.out.println("Flag : "+flag);
	                break;
	            }
	        }

	        if (!flag)
	            return true;
	        else
	            return false;

		};

		// System.out.println(greeting2.sayHello("hi cm"));
		
		int num = 344;
        boolean flag = false;
        for(int i = 2; i <= num/2; ++i){
            // condition for nonprime number
        	System.out.println(num);
            if(num % i == 0){
                flag = true;
                break;
            }
        }

        if (!flag)
            System.out.println(num + " is a prime number." + flag);
        else
            System.out.println(num + " is not a prime number.");
        
        System.out.println(2%2 == 0);
		
		
		
		
		
		
		

		//greet(2, greeting2);
	}

	public static void greet(int id, Greeting2 greetings) {// we can parameterized behavior through interface
		// String hello = greetings.sayHello(name);
		boolean flag = greetings.check(id);

		System.out.println(flag);
	}

}
