
public class ThreadWithLambda {
    public static void main(String[] args) {
        Runnable obj1 = new Runnable() {

            public void run() {
                for (int i = 0; i < 10; ++i) {
                    System.out.println("Hi");
                    try {
                        Thread.sleep(10);
                        
                    } catch (Exception e) {
                       
                    }
                }
            }
        };

        Runnable obj2 = new Runnable() {
            public void run() {
                for (int i = 0; i < 10; ++i) {
                    System.out.println("Hello");
                    try {
                        Thread.sleep(10);
                    } catch (Exception e) {
                        
                    }
                }
            }
        };

        Thread t1=new Thread(obj1);
        Thread t2=new Thread(obj2);
        t1.start();
        t2.start();
    }

}
