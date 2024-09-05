const { parse } = require('path');
const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
})

rl.question('', (inputa) =>{
    rl.question('', (inputb) =>{
        rl.question('', (inputc) =>{
            rl.question('', (inputd) =>{
                let a = parseInt(inputa);
                let b = parseInt(inputb);
                let c = parseInt(inputc);
                let d = parseInt(inputd);

                diferenca = (a * b) - (c * d);

                console.log(`DIFERENCA = ${diferenca}`);

                rl.close();
            })
        });
    });
});