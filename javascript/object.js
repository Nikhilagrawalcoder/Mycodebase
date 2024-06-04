// singleton
// object literals
const mysym=Symbol('garvit')
const jsuser={
    "full name":"nikhil",
    age:"20",
    status:false,
    email:"nikhila",
    [mysym]:"garvit"
}
// console.log(jsuser.name)
// console.log(jsuser["full name"])
// console.log(typeof(jsuser[mysym]))
jsuser.age=47
// Object.freeze(jsuser)
jsuser.age=48
// console.log(jsuser)

jsuser.greeting=function(){
    console.log(`hello js user ${this["full name"]}`);
    
}

console.log(jsuser.greeting)
console.log(jsuser.greeting())