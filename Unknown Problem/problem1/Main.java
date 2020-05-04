/*
Create A class called Box that include three pieces of information as instance variables-height,width and depth(type double) of two 
boxes. Your class should have a constructor and initializes the three instance variables for the first box's are(10,10,10) and second
box's are (20.30.10). Write a test application named main.java that demonstrate class Box's capabilities.
*/

public class Main {

  public static void main(String[] args) {

    Box box1 = new Box(10,10,10);
    Box box2 = new Box(20,30,10);

    box1.displayVol();
    box2.displayVol();
    
  }
}
