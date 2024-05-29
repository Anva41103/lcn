/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    let i=0;
    for(l in args) {i++;}
    return i;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */