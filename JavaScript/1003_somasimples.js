const readline = require('readline')

const ll = readline.createInterface({
    input: process.stdin,
    output: process.stdout,

});

ll.question('', (inputA) =>{
    ll.question('', (inputB) =>{
        const a = parseInt(inputA);
        const b = parseInt(inputB);

        const soma = a + b;

        console.log(`SOMA = ${soma}`);

        ll.close();
    });
});
