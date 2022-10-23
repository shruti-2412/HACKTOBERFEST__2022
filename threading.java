package com.example;

class myThread implements Runnable{
    @Override
    public void run(){
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
        System.out.println("Thread class running");
    }
}
class runableThread implements Runnable{
    @Override
    public void run() {
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
        System.out.println("interface is running");
    }
}
public class threading {
    public static void main(String[] args) {
        runableThread bullet = new runableThread();
        myThread b2 = new myThread();
        Thread gun = new Thread(bullet);
        Thread g2 = new Thread(b2);
        gun.start();
        System.out.println(gun.getName());


    }
}
