import java.util.HashMap;

public class Bevrage {
    String name;
    HashMap<String,Ingriedients>hm;


    public Bevrage(){
        hm=new HashMap<>();

    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public HashMap<String, Ingriedients> getHm() {
        return hm;
    }

    public void setHm(HashMap<String, Ingriedients> hm) {
        this.hm = hm;
    }

    public Bevrage(String name, HashMap<String, Ingriedients> hm) {
        this.name = name;
        this.hm = hm;
    }
}
