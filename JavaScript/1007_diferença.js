const { parse } = require('path');
const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
})

rl.question('', (input_a) =>{
    rl.question('', (input_b) =>{
        rl.question('', (input_c) =>{
            rl.question('', (input_d) =>{
                let a = parseInt(input_a);
                let b = parseInt(input_b);
                let c = parseInt(input_c;
                let d = parseInt(input_d);

                diferenca = (a * b) - (c * d);

                console.log(`DIFERENCA = ${diferenca}`);

                rl.close();
            })
        });
    });
});
