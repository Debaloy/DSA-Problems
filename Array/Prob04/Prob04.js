const solution = (arr) => {
    let zeros = arr.filter(element => element === 0 ? true : false);
    let ones = arr.filter(element => element === 1 ? true : false);
    let twos = arr.filter(element => element === 2 ? true : false);

    arr = [];

    arr = arr.concat((zeros).concat((ones.concat(twos))));
    console.log(arr);
};

let arr = [0, 1, 0, 2, 1, 0, 2, 1, 0, 2];
solution(arr);