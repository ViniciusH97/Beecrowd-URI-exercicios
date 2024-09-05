const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,

});

rl.question('', (inputa) =>{
    rl.question('', (inputb) =>{

        let a = parseFloat(inputa);
        let b = parseFloat(inputb);

        a = a * 3.5;
        b = b * 7.5;

        let media = (a + b) / 11;

        console.log(`MEDIA = ${media.toFixed(5)}`);
    
        rl.close();

    });
});