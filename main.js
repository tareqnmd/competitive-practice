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
        const number = parseInt(readline());
        if (number > 0) {
            if (number > 10) {
                console.log(number - 10, 10)
            } else {
                console.log(0, number)
            }
        } else {
            console.log(0, 0);
        }
    }
}