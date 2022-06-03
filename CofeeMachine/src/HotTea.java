public class HotTea extends Item {

    public HotTea(Ingriedients  ingriedients)
    {
        this.name="HotTea";



    }

    @Override
    public void prepare() {
        this.ingriedients.hotWater-=300;
        this.ingriedients.sugarSyrup-=20;
        this.ingriedients.teaLeafSyrup-=30;
    }
}
