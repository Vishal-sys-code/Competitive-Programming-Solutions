class SquareDetails{
    int side;
    public int area(){
        return side*side;
    }
    public int perimeter(){
        return 4*side;
    }
}

public class Square {
    public static void main(String[] args){
        SquareDetails s1 = new SquareDetails();
        s1.side = 5;
        System.out.println("Area: " + s1.area());
        System.out.println("Perimeter: " + s1.perimeter());
    }    
}
