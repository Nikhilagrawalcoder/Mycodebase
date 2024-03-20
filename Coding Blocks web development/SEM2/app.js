
console.log("start");
let id=setInterval(() => {
    console.log("after 4 secs");
}, 4000);
setTimeout(() => {
    console.log("d");
}, 3000);
setTimeout(() => {
    clearInterval(id);
}, 9000);
console.log("end");
