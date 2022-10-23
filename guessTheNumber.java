package com.example;

import java.util.Random;
import java.util.Scanner;

class Number{

    private  int num;
    private int  count =0;
    private int enteredNum;

    public int getEnteredNum() {
        return enteredNum;
    }

    public void setEnteredNum(int enteredNum) {
        this.enteredNum = enteredNum;
    }

    public int getNum(){
        return num;
    }
    public  void setNum( int n){
        num = n;
    }


    public void enterAgain(){
        System.out.println("Enter the number again");
        Scanner sc = new Scanner(System.in);
        setEnteredNum(sc.nextInt());
        isNumCorrect();
    }

    public void isNumCorrect() {
        if (num!=enteredNum){
            if (num>enteredNum){
                System.out.println("you entered a smaller number");
                count++;
                enterAgain();
            }
            if (num<enteredNum){
                System.out.println("you entered a greater number");
                count++;
                enterAgain();
            }

        }
        else {
            System.out.format("you Won! " + "in %d moves " , count);
        }
    }
}

public class guessTheNumber {
    public static void main(String[] args) {


        Random random = new Random();
        Number number = new Number();
        Scanner sc = new Scanner(System.in);
        number.setNum( random.nextInt(100));
        System.out.println("Guess the com.example.Number");
        number.setEnteredNum(sc.nextInt());
        number.isNumCorrect();

    }
}
