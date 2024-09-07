const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});


const readLine = () => new Promise((resolve) => rl.question('', resolve));

async function processInput() {
    let total = 0;

    const line1 = await readLine();
    const [codigo1, num1, valor1] = line1.split(' ').map((x, i) => i > 0 ? parseFloat(x) : parseInt(x));
    total += num1 * valor1;

    const line2 = await readLine();
    const [codigo2, num2, valor2] = line2.split(' ').map((x, i) => i > 0 ? parseFloat(x) : parseInt(x));
    total += num2 * valor2;

    console.log(`VALOR A PAGAR: R$ ${total.toFixed(2).replace('.', ',')}`);

    rl.close();
}

processInput();
