const canvas =document.getElementById('canvas1');
const ctx=canvas.getContext('2d');
//console.log(ctx); //this is for see the property of ctx
canvas.width=window.innerWidth;
canvas.height=window.innerHeight;




window.addEventListener('resize',function(){
canvas.width=window.innerWidth;
canvas.height=window.innerHeight;
//ctx.fillStyle='white';
//ctx.fillRect(10,20,150,50);
})




const mouse ={
    x:undefined,
    y:undefined,
}




canvas.addEventListener('click',function(event){
mouse.x=event.x;
mouse.y=event.y;//console.log(event);
drowCircle();
})




canvas.addEventListener('mousemove',function(){
    mouse.x=event.x;
    mouse.y=event.y;
    drowCircle();



})



function drowCircle(){
//ctx.fillStyle='white';
//ctx.fillRect(10,20,150,50);
ctx.fillStyle='blue';//fill complete are of circle
ctx.strokeStyle='red';//only circumference colour
ctx.lineWidth=11;//circumference width
ctx.beginPath();
//5 argument of arc are 1st,2nd=cordinate ,3rd=radiun ,4th=start angle (means from where circle start),5th=end angle
ctx.arc(mouse.x,mouse.y,50,0,Math.PI*2);
//ctx.fill(); if we use stoke then we dont have to fill inner part so we comment it out
ctx.stroke();
ctx.fill()

//console.log(ctx);

}




drowCircle();


