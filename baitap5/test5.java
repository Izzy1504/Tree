package baitap5;

public class test5 
{
    public static void main(String[] args) {
        Customer m = new Customer(25, "Tuan", 20);
        Invoice n= new Invoice(12, m, 50000);
        System.out.println(m.toString());
        System.out.println("Customer : "+n.getCustomerName());
        System.out.println("After discount : "+n.getAmountAfterDiscount());
    }
    
}
