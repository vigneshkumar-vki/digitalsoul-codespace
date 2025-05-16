let circularprogress = document.querySelector(".circular-progress-bar"),
progressValue = document.querySelector(".progress-value");

let progressStarValue = 0,
progressEndValue = 100,
speed = 100;

let progress = setInterval(()=> {
                                    progressStarValue++;
                                    progressValue.textContent =`${progressStarValue}%`
                                    circularprogress.style.background =`conic-gradient(#0652dd
                                    ${progressStarValue*3.6}deg,orange 0deg)`
                                    if(progressStarValue == progressEndValue){
                                        clearInterval(progress)
                                    }

},speed);