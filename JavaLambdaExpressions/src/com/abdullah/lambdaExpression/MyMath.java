package com.abdullah.lambdaExpression;

class MyMath {
	public static boolean checker(PerformOperation p, int num) {
		return p.check(num);
	}

	public PerformOperation isOdd() {

		PerformOperation isOddOperation = (int id) -> {
			return (id % 2 != 0);
		};
		return isOddOperation;

	}

	public PerformOperation isPrime() {
		PerformOperation isPrime = (int id) -> {

			boolean flag = false;
			for (int i = 2; i <= id / 2; ++i) {
				if (id % i == 0) {
					flag = true;
					break;
				}
			}
			if (!flag)
				return true;
			else if (id == 2)
				return true;
			else
				return false;
		};
		return isPrime;
	}

	public PerformOperation isPalindrome() {

		PerformOperation isOddOperation = (int id) -> {
			StringBuilder original = new StringBuilder();
			StringBuilder reverse = new StringBuilder();
			
			original.append(id);
			
			String originalNumber = original.toString();
			
			
			reverse = original.reverse();
			String reverseNumber = reverse.toString();
			
			if (originalNumber.equals(reverseNumber))
				return true;
			return false;

		};
		return isOddOperation;

	}

}