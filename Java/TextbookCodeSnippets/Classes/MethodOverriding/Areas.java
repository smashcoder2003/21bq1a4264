package TextbookCodeSnippets.Classes.MethodOverriding;

class Figure {
    double dim1,dim2;
    Figure(double a, double b) {
        dim1 = a;
        dim2 = b;
    }
    double area() {
        System.out.print("Inside area of Figure: ");
        return 0;
    }
}

class Rectangle extends Figure {
    Rectangle(double a , double b) {
        super(a,b);
    }
    double area() {
        System.out.print("Inside area of a Rectangle: ");
        return  dim1 * dim2;
    }
}
class Triangle extends Figure {
    Triangle(double a, double b) {
        super(a,b);
    }
    double area() {
        System.out.println("Inside area of a triangle: ");
        return (dim1 * dim2) / 2;
    }
}
class FindAreas {
    public static void main(String[] args) {
        double area;
        Figure f = new Figure(10 ,15);
        area = f.area();
        System.out.println("area of Figure: " + area);
        Rectangle r = new Rectangle(9 ,12);
        area = r.area();
        System.out.println("area of Rectangle: " + area);
        Triangle t = new Triangle(11,12);
        area = t.area();
        System.out.println("area of Triangle: " + area);
    }
}