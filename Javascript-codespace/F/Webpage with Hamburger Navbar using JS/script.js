const hamburger =document.querySelector('.hamburger');
const navbar = document.querySelector('.nav ul');

hamburger.addEventListener('click',()=>{
    navbar.classList.toggle('slide');
});