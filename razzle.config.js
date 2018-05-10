'use strict';
module.exports = {
  modify(config, { target, dev }, webpack) {
    const appConfig = config; // stay immutable here

    // hack for images
    // TODO maybe change after dockerizing
    if(appConfig.output.publicPath === "/"){
      appConfig.output.publicPath = "./";
    }
    
    return appConfig;
  },
};
