/*Problem 3: Write a program that takes a number as input, and outputs what is the type
of it. For example, if I input 120 it will show byte, if I input 300 it will show it is an
integer, If I input more than the range of long, it will show long.
*/

package com.mmrproduct;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        var input = scanner.nextLine();

        if (input.matches("\\d+")) {
            long textToLong = Long.parseLong(input);
            if (textToLong < 128) {
                System.out.println("Byte");
            } else if (textToLong > 128 && textToLong <= 2147483647) {
                System.out.println("Integer");
            } else if (textToLong > 2147483647) {
                System.out.println("Long");
            }
        } else {
            System.out.println(input.getClass().getName());
        }
    }
}
