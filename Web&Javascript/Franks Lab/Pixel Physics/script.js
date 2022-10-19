window.addEventListener('load',function(){
    const canvas=this.document.getElementById('canvas1');
    const ctx=canvas.getContext('2d');
    canvas.width=window.innerWidth;
    canvas.height=window.innerHeight; 
    
    const image1 = this.document.getElementById('image1');

    class Particle{
      constructor(){
          this.x=Math.random() * effect.width;
          this.y=Math.random() * effect.height;
          this.size=10;
          this.vx=Math.random() * 2 - 1;
          this.vy=Math.random() * 2 - 1;
      }
      draw(context){
          context.fillRect(this.x,this.y,this.size,this.size);
      }
      update(){
          this.x += this.vx;
          this.y += this.vy;
      }
    }
    class Effects{
       constructor(width,height){
           this.width=width;
           this.height=height;
           this.particlesArray =[];
           this.image=document.getElementById('image1');
           this.centerX=this.width * 0.5;
           this.centerY=this.height * 0.5;
           this.x=this.centerX -this.image.width * 0.5;
           this.y=this.centerY -this.image.height *0.5;
       }
       init(context){
        context.drawImage(this.image,this.x,this.y);
        const pixels = context.getImageData(0,0,this.width,this.height);
        console.log(pixels);   
    }
       draw(context){
           this.particlesArray.forEach(particle => particle.draw(context));
                }
       update(){
        this.particlesArray.forEach(particle => particle.update());
       }
    }
    const effect=new Effects(canvas.width,canvas.height);
    effect.init(ctx);
      // console.log(effect);
    function animate(){
        ctx.clearRect(0,0,canvas.width,canvas.height);
        effect.draw(ctx);
        effect.update();
        requestAnimationFrame(animate);
    }
  //  animate();
  
 //   ctx.fillRect(0,0,100,200);
 //   ctx.drawImage(image1,100,200,400,300);
})