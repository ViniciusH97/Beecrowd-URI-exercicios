const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
})

rl.question('', (inputVendedor) =>{
    rl.question('', (inputSalarioFixo) =>{
        rl.question('', (inputMontanteTotal) =>{
            let nome_vendedor = String(inputVendedor);
            let salario_fixo = parseFloat(inputSalarioFixo);
            let montante = parseFloat(inputMontanteTotal);

            let comissao = 0;

            comissao = montante * 0.15;

            let total = comissao + salario_fixo;

            console.log(`TOTAL = R$ ${total.toFixed(2)}`);

            rl.close();
        });
    });
});