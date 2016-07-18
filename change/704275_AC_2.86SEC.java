import java.util.Scanner; 
public class Main { 
     public static void main(String args[]){ 
          Scanner scan = new Scanner(System.in); 
          int good = scan.nextInt(); 
          int d = 1000-good; 
          int a = d/100; 
          int b=(d-(a*100))/50; 
          int c = (d-(a*100)-(b*50))/10; 
          System.out.println(a+" "+b+" "+c); 
     } 
} 