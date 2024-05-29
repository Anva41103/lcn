/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let k=init;
    return {
        increment: function()
        {
            return ++k;
        },
        decrement: function()
        {
            return --k;
        },
        reset: function()
        {
            k=init;
            return k;
        }
    }
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */