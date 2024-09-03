const readline = require('readline');

const ll = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

ll.question('', (inputRaio) => {
    const r = parseFloat(inputRaio);
    const n = Math.PI;
    const area = n * (r * r);

    console.log(`A = ${area.toFixed(4)}`);

    ll.close();
});