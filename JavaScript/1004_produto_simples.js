const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

rl.question('', (inputa)=>{
    rl.question('', (inputb)=>{
        const a = parseInt(inputa);
        const b = parseInt(inputb);

        const prod = a*b;

        console.log(`PROD = ${prod}`);

        rl.close();

    });
});