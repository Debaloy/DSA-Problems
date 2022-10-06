const solution = (arr) => {
    let finderPointer = 0;
    let swapPointer = 0;

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] >= 0) finderPointer++;
        else {
            for (let j = i; j > swapPointer; j--) {
                let temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            swapPointer++;
        }
    }

    arr.forEach(element => {
        console.log(element);
    });
};

arr = [ 12, 3, -2, 9, -5, -3, 7 ];
solution(arr);
