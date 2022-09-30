const solution = (arr, n) => {
    arr.sort().reverse();
    let n_max = arr[n - 1];
    let n_min = arr[arr.length - n];

    console.log('Max: ' + n_max);
    console.log('Min: ' + n_min);
};

let arr = [-6, 4, 0, -1, 5];
let n = 2;
solution(arr, n);