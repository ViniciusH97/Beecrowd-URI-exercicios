const readline = require('readline');

const rl = readline.createInterface({
    input: stdin,
    output: stdout,
})

rl.question('', (input_id) =>{
    rl.question('', (input_quantidade) =>{
        rl.question('', (input_valor) =>{
            let i=0, total=0;

            for(i in 2){
                let id = parseInt(input_id);
                let quantidade = parseInt(input_quantidade);
                let valor = parseFloat(input_valor);

                total += valor * quantidade;
            }

            console.log(`TOTAL A PAGAR = R$ ${total}`);

            rl.close();

        });
    });
});