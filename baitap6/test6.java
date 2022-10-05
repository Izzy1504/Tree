package baitap6;

public class test6 
{
    public static void main(String[] args) 
    {
        Customer n =  new Customer(14,"Ngheo",'m');
        Account m= new Account(14, n,10000);
        System.out.println(m.toString());
        m.deposit(5000.457);
        System.out.println("Balance: "+m.getBalance());
        m.withdraw(5000.25);
        System.out.println("Balance: "+m.getBalance());
    //     Customer c1 = new Customer(1001, "abc", 'k');
    //     Account a1 = new Account(1001, c1, 10000);
    //     System.out.println(a1);
    //     a1.deposit(5000);
    //     System.out.println(a1);
    //     a1.withdraw(6000.2344);
    //     System.out.println(a1);
    // }
    }
}
