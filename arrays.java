package com.example;

import java.util.Scanner;

public class arrays {

    public static void main(String[] args) {
//
//        int[][] marks = {{1,6,5,4,22},{1,6,5,},{1,4,22},{1,6,4,22},{1,4,6,5,4,22}};
//        System.out.println(marks[3][3]);
//

        Scanner sc = new Scanner(System.in);
        int len ,hgt,i=0,j = 0;
        int line;
        System.out.println("enter the length of array");
        len = sc.nextInt();
        System.out.println("enter the height of array");
        hgt = sc.nextInt();

        int arr[][] = new int[len][hgt];
        System.out.println("enter the elements of array");

        for ( i=0;i<len;i++){
            for ( j=0;j<hgt;j++){

                arr[i][j]=sc.nextInt();
            }
        }

        for ( i=0;i<len;i++){
            for ( j=0;j<hgt;j++){
                     System.out.print(arr[i][j] +"\t");
            }
            System.out.println("");
        }




    }

}
