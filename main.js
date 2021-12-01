'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });

    main();
});

function readline() {
    return inputString[currentLine++];
}

function main() {
    const cases = readline();
    for (let i = 0; i < cases; i++) {
        const numbers = readline().split(" ").map(Number);
        let sum = 0;
        for (let j = 0; j < numbers.length; j++) {
            sum += numbers[j];

        }
        console.log(`Case ${i+1}: ${sum}`);
    }
}
