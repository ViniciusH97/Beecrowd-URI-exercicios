const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('', (inputA) => {
  rl.question('', (inputB) => {
    const A = parseInt(inputA);
    const B = parseInt(inputB);
    const X = A + B;
    console.log(`X = ${X}`);
    rl.close();
  });
});
