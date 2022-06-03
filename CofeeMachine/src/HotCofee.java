public class HotCofee extends  Item{

    public HotCofee(Ingriedients ingriedients){
        this.name="HotCofee";
   //     this.ingriedients.hotWater=ingriedients.hotWater;
   //     this.ingriedients.hot_milk=ingriedients.hot_milk;
   //     this.ingriedients.coffeeDeccotionl=ingriedients.coffeeDeccotionl;
   //     this.ingriedients.sugarSyrup=ingriedients.sugarSyrup;

    }


    @Override
    public void prepare() {
        this.ingriedients.hotWater-=100;
        this.ingriedients.hot_milk-=400;
        this.ingriedients.coffeeDeccotionl-=50;
        this.ingriedients.sugarSyrup-=30;
    }


}
