const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
})

rl.question('', (input_id) =>{
    rl.question('', (input_horas) =>{
        rl.question('', (input_valor) =>{
            let id = parseInt(input_id);
            let horas = parseInt(input_horas);
            let valor_p_hora = parseFloat(input_valor);

            salario = valor_p_hora * horas;

            console.log(`NUMBER = ${id}\nSALARY = U$ ${salario.toFixed(2)}`);

            rl.close();
        });
    });
});