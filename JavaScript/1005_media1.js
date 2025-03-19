const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,

});

rl.question('', (input_a) =>{
    rl.question('', (input_b) =>{

        let a = parseFloat(input_a);
        let b = parseFloat(input_b);

        a = a * 3.5;
        b = b * 7.5;

        let media = (a + b) / 11;

        console.log(`MEDIA = ${media.toFixed(5)}`);
    
        rl.close();

    });
});
