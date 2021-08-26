const canvas=document.getElementById('canvas1');

ctx=canvas.getContext('2d'); // context variable




canvas.width=window.innerWidth;
canvas.height=window.innerHeight;
const particlesArray =[];

let hue=0;


window.addEventListener('resize',function(){
    canvas.width=window.innerWidth;
    canvas.height=window.innerHeight;
     
});
 


const mouse={

    x: undefined,
    y: undefined,


}
canvas.addEventListener('click',function(event){
    mouse.x=event.x;
    mouse.y=event.y;

    for(let i=0;i<10;i++)
    particlesArray.push(new Particle());
   // drawCircle();

  //  console.log(event);
})


function animate(){
    ctx.clearRect(0,0,canvas.width,canvas.height);
  //  drawCircle();

  //ctx.fillStyle='rgba(0,0,0,0.02)';
  //ctx.fillRect(0,0,canvas.width,canvas.height);

  handleParticles();
 hue+=2;
    requestAnimationFrame(animate);
}
animate();



class Particle{

    constructor()
    {
        this.x=mouse.x;
        this.y=mouse.y;

       //this.x=Math.random() * canvas.width;
       //this.y=Math.random() *canvas.height;


        this.size=Math.random() * 15 + 1;
        this.speedX=Math.random() *3 -1.5;
        this.speedY=Math.random()* 3 -1.5;
        this.color='hsl('+hue+',100%,50%)';  
    }

   update()
   {

    this.x+=this.speedX;
    this.y+=this.speedY;

    if(this.size>0.2)this.size-=0.1;

   }

   draw()
   {
    ctx.fillStyle=this.color;
    //ctx.strokeStyle='red';
    
    ctx.beginPath();
    ctx.arc(this.x,this.y,this.size,0,Math.PI*2);
    ctx.fill();
    //ctx.stroke()
   }




}


// function init()
// {
//     for(let i=0;i<100;i++)
//     {
//   particlesArray.push(new Particle());


//     }
// }

//init();

function handleParticles()
{
    for(let i=0;i<particlesArray.length;i++)
    {
        particlesArray[i].update();
        particlesArray[i].draw();

       

       for(let j=i;i<Particle.length;j++){
           
          const dx=particlesArray[i].x=particlesArray[j].x;
          const dy=particlesArray[i].y-particlesArray[j].y;

         const distance=Math.sqrt(dx*dx+dy*dy);
        
         if(distance<100)
         {

            ctx.beginPath();
            ctx.strokeStyle(particlesArray[i].color);
            ctx.moveTo(particlesArray[i].x,particlesArray[i].y)
            ctx.lineTo(particlesArray[j].x,particlesArray[j].y);
            ctx.stroke();
           ctx.closePath();
            // this is not working as expected

         }       
       }
       if(particlesArray[i].size<=0.3){
        particlesArray.splice(i,1);
        console.log(particlesArray.length);
        i--;
        
        }


    }
  //  console.log(particlesArray[0].x);
}


//console.log(particlesArray);



canvas.addEventListener('mousemove',function(event){
    

    mouse.x=event.x;
    mouse.y=event.y;

    
    for(let i=0;i<5;i++)
    particlesArray.push(new Particle());

    //console.log("triggers")

   // drawCircle();


})


// function drawCircle(){

//     ctx.fillStyle='blue';
//     //ctx.strokeStyle='red';
    
//     ctx.beginPath();
//     ctx.arc(mouse.x,mouse.y,50,0,Math.PI*2);
//     ctx.fill();
//     //ctx.stroke();
// }


//drawCircle();

// fundamentals

//console.log(canvas);

//console.log(ctx);





