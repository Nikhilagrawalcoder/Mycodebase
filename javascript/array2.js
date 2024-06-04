const hero=["thor","ironman","de"]
const dc=["d","ew","we"];
// dc.push(hero)
// console.log(dc);
// const w=dc.concat(hero);
// console.log(w);
const ad=[...dc,...hero]
// console.log(ad);
const aw=[1,2,3,[4,5,6],7,[6,7,[8,9]]]
const real=aw.flat(Infinity)
console.log(real);
let s1=100;
let s2=200;
let s3=300;
console.log(Array.of(s1,s2,s3))