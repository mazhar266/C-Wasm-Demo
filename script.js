requirejs.config({
    //By default load any module IDs from js/lib
    baseUrl: '.',
    //except, if the module ID starts with "app",
    //load it from the js/app directory. paths
    //config is relative to the baseUrl, and
    //never includes a ".js" extension since
    //the paths config could be for a directory.
    paths: {
        app: '.'
    }
});

requirejs(['math'], function   ($, canvas, sub) {
    console.log($);
    var factory = $;

    factory().then((instance) => {
        console.log(instance._add(5, 8)); // direct calling works
        instance.ccall("main"); // using ccall etc. also work
        console.log(instance._multiply(5, 5)); // values can be returned, etc.
    });
});
