const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.output,
})

rl.question('', (inputVendedor) =>{
    rl.question('', (inputSalarioFixo) =>{
        rl.question('', (inputMontanteTotal) =>{
            let nome_vendedor = String(inputVendedor);
            let salario_fixo = parseFloat(inputSalarioFixo);
            let montante = parseFloat(inputMontanteTotal);

            let comiissao = 0;

            comissao = montante * 0.15;

            montante = comissao + salario_fixo;

            console.log(`TOTAL = ${salario_fixo}`);

            rl.close();
        });
    });
});