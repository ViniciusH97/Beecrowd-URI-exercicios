const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
})

rl.question('', (input_a) =>{
    rl.question('', (input_b) =>{
        rl.question('', (input_c)=>{
            let a = parseFloat(input_a);
            let b = parseFloat(input_b);
            let c = parseFloat(input_c);

            a*=2; b*=3; c*=5;

            media = (a + b + c) / 10;

            console.log(`MEDIA = ${media.toFixed(1)}`);

            rl.close();

        });
    });
});
