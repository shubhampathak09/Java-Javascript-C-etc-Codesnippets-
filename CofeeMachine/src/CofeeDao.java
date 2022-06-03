import java.util.HashMap;

public class CofeeDao {

    private Ingriedients ingriedients;

    CofeeDao(){
        ingriedients.hot_milk=500;
        ingriedients.hotWater=500;
        ingriedients.coffeeDeccotionl=100;
        ingriedients.sugarSyrup=100;
        ingriedients.teaLeafSyrup=100;
        ingriedients.green_tea_syrup=100;

    }

    public void add(Ingriedients ingriedients){
        this.ingriedients.hot_milk+=ingriedients.hot_milk;
        this.ingriedients.green_tea_syrup+=ingriedients.green_tea_syrup;
        this.ingriedients.sugarSyrup+=ingriedients.sugarSyrup;
        this.ingriedients.hotWater+=ingriedients.hotWater;
        this.ingriedients.teaLeafSyrup+=ingriedients.teaLeafSyrup;
        this.ingriedients.coffeeDeccotionl+=ingriedients.coffeeDeccotionl;

    }

    public void get(){
        System.out.println("hot_milk ->"+this.ingriedients.hot_milk);
        System.out.println("green_tea_syrup ->"+this.ingriedients.getGreen_tea_syrup());
        System.out.println("sugarSyrup ->"+this.ingriedients.sugarSyrup);
        System.out.println("hotWate ->"+this.ingriedients.hotWater);
        System.out.println("tealLeafSyrup ->"+this.ingriedients.teaLeafSyrup);
        System.out.println("cofeedeccotionL ->"+this.ingriedients.coffeeDeccotionl);
    }


    public void set(Ingriedients newIngriedients){
        ingriedients=newIngriedients;
    }

}
