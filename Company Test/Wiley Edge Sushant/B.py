// for (var i = 0; i < 3; i++) {
//     setTimeout(() => console.log(i), 1);
// }
// for (var i = 0; i < 3; i++) {
//     setTimeout(() => console.log(i), 1);
// }

var m = require("./B")
console.log((function (set) {
    return set.split('').reverse().join('');
})(m.name));