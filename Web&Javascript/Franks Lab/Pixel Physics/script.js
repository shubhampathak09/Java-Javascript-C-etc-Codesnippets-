window.addEventListener('load',function(){
    const canvas=this.document.getElementById('canvas1');
    const ctx=canvas.getContext('2d');
    canvas.width=window.innerWidth;
    canvas.height=window.innerHeight; 
    
    const image1 = this.document.getElementById('image1');

    class Particle{
      constructor(){
          this.x=0;
          this.y=0;
          this.size=30;
      }
      draw(){
          ctx.fillRect(this.x,this.y,this.size,this.size);
      }
    }
    class Effects{

    }
    function animate(){

    }
    const particle1=new Particle();
    particle1.draw();
 //   ctx.fillRect(0,0,100,200);
 //   ctx.drawImage(image1,100,200,400,300);
})