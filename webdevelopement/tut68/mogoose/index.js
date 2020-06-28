const mongoose = require('mongoose');
mongoose.connect('mongodb://localhost/harsh', { useNewUrlParser: true, useUnifiedTopology: true });
const db = mongoose.connection;
db.on('error', console.error.bind(console, 'connection error:'));
// db.once('open', function () {
//     // we're connected!
//     console.log("we are connectd mr harsh")
// })
const kittySchema = new mongoose.Schema({
    name: String,
});
kittySchema.methods.speak = function () {
    const greeting = this.name
        ? "Meow name is " + this.name
        : "I don't have a name";
    console.log(greeting);
};

const Kitten = mongoose.model('Kitten', kittySchema);
// const silence = new Kitten({ name: "Harrykitten" });
// silence.save(function (err, silence) {
//     if (err) return console.error(err);
//     silence.speak();
// });
// const mycat = new Kitten({ class: 11 });
// mycat.save(function (err, mycat) {
//     if (err) return console.error(err);
//     mycat.speak();
// });
Kitten.find({ name: "Harrykitten" }, function (err, kittens) {
    if (err) return console.log(err);
    console.log(kittens);
});

