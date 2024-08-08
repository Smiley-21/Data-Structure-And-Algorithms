
class Bicycle {
    private int gear;
    private int speed;

    public Bicycle(int gear, int speed) {
        this.gear = gear;
        this.speed = speed;
    }

    public void ApplyBrake(int dec) {
        speed -= dec;
    }

    public void speedUp(int incre) {
        speed += incre;
    }

    public String toString() {
        return ("No of gears are " + gear + "\n" + "Speed of bicycle is " + speed + "\n");
    }
}

class MountainBicycle extends Bicycle {
    public int seatHeight;

    public MountainBicycle(int gear, int speed, int seatHeight) {
        super(gear, speed);
        this.seatHeight = seatHeight;
    }

    public void setHeight(int height) {
        seatHeight = height;
    }

    public String toString() {
        return (super.toString() + "seat Height is " + seatHeight);
    }

}

public class InheritanceA {

    public static void main(String args[]) {
        MountainBicycle mb = new MountainBicycle(3, 20, 2);
        System.out.println(mb.toString());
        
    }

}
