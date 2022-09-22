/*
add(BigInteger val)	做加法運算
subtract(BigInteger val)	做減法運算
multiply(BigInteger val)	做乘法運算
divide(BigInteger val)	做除法運算
remainder(BigInteger val)	做取餘數運算
divideAndRemainder(BigInteger val)	做除法運算，返回陣列的第一個值為商，第二個值為餘數
pow(int exponent)	做引數的 exponent 次方運算
negate()	取相反數
shiftLeft(int n)	將數字左移 n 位，如果 n 為負數，則做右移操作
shiftRight(int n)	將數字右移 n 位，如果 n 為負數，則做左移操作
and(BigInteger val)	做與運算
or(BigInteger val)	做或運算
compareTo(BigInteger val)	做數字的比較運算
equals(Object obj)	當引數 obj 是 Biglnteger 型別的數字並且數值相等時返回 true, 其他返回 false
min(BigInteger val)	返回較小的數值
max(BigInteger val)	返回較大的數值
 */

import java.math.BigInteger;
import java.util.*;

class jabigint{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
        BigInteger a =input.nextBigInteger();
        BigInteger b =input.nextBigInteger();
        long c = input.nextLong();
		BigInteger fin = a.multiply(b);
		BigInteger ten = new BigInteger("10");
		BigInteger zero = new BigInteger("0");
		int count = 0;
		while(fin.remainder(ten).equals(zero)) {
			count++;
			fin = fin.divide(ten);
		}
		if(count==c) {
			System.out.println("Well done!");
		}else {
			System.out.println("Doubt!");
		}
	}
}