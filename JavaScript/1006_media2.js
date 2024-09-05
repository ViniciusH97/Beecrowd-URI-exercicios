const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
})

rl.question('', (inputa) =>{
    rl.question('', (inputb) =>{
        rl.question('', (inputc)=>{
            let a = parseFloat(inputa);
            let b = parseFloat(inputb);
            let c = parseFloat(inputc);

            a*=2; b*=3; c*=5;

            media = (a + b + c) / 10;

            console.log(`MEDIA = ${media.toFixed(1)}`);

            rl.close();

        });
    });
});