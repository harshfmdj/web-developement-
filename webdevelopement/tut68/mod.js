
function average(arr) {
    let sum = 0;
    arr.forEach(element => {
        sum += element;
    });
    return sum / arr.length;
}
module.exports = {
    avg: average,
    name: "Harry",
    repo: "GitHUB"
}
// module.exports.name = "Harry"