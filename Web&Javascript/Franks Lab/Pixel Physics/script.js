window.addEventListener('load',function(){
    const canvas=this.document.getElementById('canvas1');
    const ctx=canvas.getContext('2d');
    canvas.width=window.innerWidth;
    canvas.height=window.innerHeight; 
    
    const image1 = this.document.getElementById('image1');

    class Particle{
      constructor(effect){
          this.x=Math.random() * effect.width;
          this.y=Math.random() * effect.height;
          this.size=100;
      }
      draw(context){
          context.fillRect(this.x,this.y,this.size,this.size);
      }
    }
    class Effects{
       constructor(width,height){
           this.width=width;
           this.height=height;
           this.particlesArray =[];
       }
       init(){
           this.particlesArray.push(new Particle(effect));
          // this.particlesArray.push(new Particle());
       }
       draw(context){
           this.particlesArray.forEach(particle => particle.draw(context));
       }
    }
    const effect=new Effects(canvas.width,canvas.height);
    
    effect.init();
    effect.draw(ctx);
    console.log(effect);
    function animate(){

    }
  
 //   ctx.fillRect(0,0,100,200);
 //   ctx.drawImage(image1,100,200,400,300);
})