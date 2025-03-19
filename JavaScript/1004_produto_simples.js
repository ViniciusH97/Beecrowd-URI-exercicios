const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

rl.question('', (input_a)=>{
    rl.question('', (input_b)=>{
        const a = parseInt(input_a);
        const b = parseInt(input_b);

        const prod = a*b;

        console.log(`PROD = ${prod}`);

        rl.close();

    });
});
