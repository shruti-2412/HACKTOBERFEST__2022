package com.example;

import java.util.Scanner;

public class factorialwithoutcurssion {
    public static void main(String[] args) {
        int fact;
        int temp = 1;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number to find factorial: ");
        fact= sc.nextInt();

        for ( int i=1;i<=fact;i++){

            temp = temp*i;

        }

        System.out.println(temp);
    }
}
