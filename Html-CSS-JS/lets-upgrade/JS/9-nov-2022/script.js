a, b, c, d, e;

const a = prompt("Enter a number");
const b = prompt("Enter a number");
const c = prompt("Enter a number");
const d = prompt("Enter a number");
const e = prompt("Enter a number");

if (a > b && a > c && a > d && a > e) {
  alert("the largest number is ", a);
} else if (b > a && b > c && b > d && b > e) {
  alert("the largest number is ", b);
} else if (c > a && c > b && c > d && c > e) {
  alert("the largest number is ", c);
} else if (d > a && d > c && d > b && d > e) {
  alert("the largest number is ", d);
} else {
  alert("the largest number is ", e);
}
