/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 * @flow
 */

import React, { Component } from 'react';
import {
  AppRegistry,
  Image,
  StyleSheet,
  Text,
  View
} from 'react-native';

var MOCKED_MOVIES_DATA = [
  {title: 'Captain America : Civil War', year: '2016', posters: {thumbnail: 'http://i.imgur.com/UePbdph.jpg'}},
];

var REQUEST_URL =
 'https://raw.githubusercontent.com/facebook/react-native/master/docs/MoviesExample.json';

var Button = require('react-native-button');
class AwesomeProject extends Component {

  constructor(props) {
  super(props);
  this.state = {
    movies: null,
  };
}

componentDidMount() {
  this.fetchData();
}

fetchData() {
  fetch(REQUEST_URL)
    .then((response) => response.json())
    .then((responseData) => {
      this.setState({
        movies: responseData.movies,
      });
    })
    .done();
}

  render() {
    var movie = MOCKED_MOVIES_DATA[0];


    if (!this.state.movies) {
      return this.renderLoadingView();
    }

    var movie = this.state.movies[0];
     return this.renderMovie(movie);
    return (
      <View style={styles.container}>

      </View>
    );
  }

  renderLoadingView() {
  return (
    <View style={styles.container}>
      <Text>
        Loading movies...
      </Text>
    </View>
    );
  }

  renderMovie(movie) {
  return (
    <View style={styles.container}>

    <Image style={styles.image} source ={{uri:"http://www.godori.org/css/images/name-title.png"}} />

    <Text style={styles.instructions}> Local Data : </Text>
    <Text>{movie.title}</Text>
    <Text>{movie.year}</Text>

    <Text style={styles.instructions}> Web Data :</Text>
    <Text style={styles.title}>{movie.title}</Text>
    <Text style={styles.year}>{movie.year}</Text>



    <Button
     style = {{borderWidth: 1, borderColor: 'blue'}}
     onPress={this._handlePress}>
     Click
   </Button>

  </View>
  );
}

}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: '#F5FCFF',
  },
  welcome: {
    fontSize: 20,
    textAlign: 'center',
    margin: 10,
  },
  instructions: {
    textAlign: 'center',
    color: '#333333',
    marginBottom: 5,
  },
  thumbnail: {
    width:100,
    height:100,
  },
  image:{
    width:100,
    height:100,
    margin:20,
  },
});

AppRegistry.registerComponent('AwesomeProject', () => AwesomeProject);
