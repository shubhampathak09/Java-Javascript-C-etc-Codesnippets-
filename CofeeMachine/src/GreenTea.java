public class GreenTea extends Item{


    public GreenTea(){
        this.name="GreenTea";
       // this.ingriedients.hotWater=200;
       // this.ingriedients.sugarSyrup=20;
       // this.ingriedients.green_tea_syrup=30;


    }

    public void prepare(){
        this.ingriedients.hotWater-=200;
        this.ingriedients.sugarSyrup-=20;
        this.ingriedients.green_tea_syrup-=30;
    }


}
