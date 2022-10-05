package baitap3;

public class MyCircle 
{
    private MyPoint center;
    private int radius;
    public MyCircle()
    {
        center=new MyPoint();

    }
    public MyCircle(MyPoint center, int radius) {
        this.center = center;
        this.radius = radius;
    }
    public MyCircle(int x, int y, int radius)
    {
        center= new MyPoint(x,y);
        this.radius= radius;
    }
    public MyPoint getCenter() {
        return center;
    }
    public void setCenter(MyPoint center) {
        this.center = center;
    }
    public int getRadius() {
        return radius;
    }
    public void setRadius(int radius) {
        this.radius = radius;
    }
    public int getCenterX() 
    {
        return center.getX();
    }
    public void setCenterX(int X)
    {
        this.center.setX(X);
    }
    public int getCenterY()
    {
        return center.getY();
    }
    public void setCenterY()
    {
        this.getCenterY();
    }
    public int[] getCenterXY()
    {
        return center.getXY();
    }
    public void setCenterXY(int x, int y)
    {
        center.setX(x);
        center.setY(y);
        
    }
    @Override
    public String toString() {
        return "MyCircle [center=" + center + ", radius=" + radius + "]";
    }
    public double getArea()
    {
        return Math.PI*radius*radius;
    }
    public double getCircumference()
    {
        return 2*radius*Math.PI;
    }
    public double distance(MyCircle another)
    {
            return center.distance(another.center);
    }
}
