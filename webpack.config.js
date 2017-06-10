const path = require('path')

module.exports = {
  entry: './lib/js/src/reasonReactRuby.js',

  output: {
    path: path.join(__dirname, 'bundleOutputs'),
    filename: '[name].js'
  }
}
