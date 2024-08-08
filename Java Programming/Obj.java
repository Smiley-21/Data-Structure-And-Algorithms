class Laptop {
    String model;
    int price;

    public String toString()
    {
        return "Hey";
    }
    // public boolean equals(Laptop that)
    // {
    //     if(this.model.equals(that.model) && this.price==that.price)
    //     {
    //         return true;
    //     }
    //     return false;
    // }
 
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((model == null) ? 0 : model.hashCode());
        result = prime * result + price;
        return result;
    }
    
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Laptop other = (Laptop) obj;
        if (model == null) {
            if (other.model != null)
                return false;
        } else if (!model.equals(other.model))
            return false;
        if (price != other.price)
            return false;
        return true;
    }

}

public class Obj {

    public static void main(String args[]) {
        Laptop obj1 = new Laptop();
        obj1.model = "Lenevo";
        obj1.price = 1000;

        Laptop obj2=new Laptop();
        obj2.model="Lenevo";
        obj2.price=1000;
        boolean res1=obj1==obj2;
        boolean res2=obj1.equals(obj2);

        System.out.println(res1);
        System.out.println(res2);
    }
}
