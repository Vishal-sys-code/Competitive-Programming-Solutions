class cylinderDetails{
    private Double radius, height;
    cylinderDetails(Double radius,Double height){
        this.height = height;
        this.radius = radius;
    }
    public void setRadius(Double radius){
        this.radius = radius;
    }
    public Double getRadius() {
        return radius;
    }
    public void setHeight(Double height) {
        this.height = height;
    }
    public Double getHeight() {
        return height;
    }
    public double surfacearea(){
        return (2*Math.PI*radius*radius + 2*Math.PI*radius*height);
    }
    public double volume(){
        return (Math.PI*radius*radius*height);
    }
}

public class cylinder{
    public static void main(String[] args){
        cylinderDetails dabba = new cylinderDetails(1.0, 1.0);
        dabba.setRadius(1.0);
        System.out.println("Radius: " + dabba.getRadius());
        dabba.setHeight(1.0);
        System.out.println("Height: " + dabba.getHeight());
        System.out.println("Total Surface area: " + dabba.surfacearea());
        System.out.println("Volume: " + dabba.volume());
    }
}