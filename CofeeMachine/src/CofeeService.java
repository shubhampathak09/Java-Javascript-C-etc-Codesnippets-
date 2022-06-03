public class CofeeService implements CofeeFactory {

    CofeeDao cofeeDao=new CofeeDao();

    @Override
    public void stockIngredients(Ingriedients ingriedeints) {
      cofeeDao.add(ingriedeints);
    }

    @Override
    public void displayStock() {

        cofeeDao.get();

    }

    @Override
    public void prepareBevrage(Item item) {
    /*
        if(!valid){
            System.out.println("insufficenet quantity");
        }
      */
     item.prepare();


    }
}
