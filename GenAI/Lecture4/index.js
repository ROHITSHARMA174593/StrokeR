// import { readLineSync } from 'readline-sync';

async function getCryptoInformation(coin){
    const response = await fetch(`https://api.coingecko.com/api/v3/coins/markets?vs_currency=inr&ids=${coin}`);
    const data = await response.json();
    console.log(data);
}
// const questionCoin = readLineSync.question('Enter the name of the cryptocurrency: -> ');

getCryptoInformation("bitcoin");