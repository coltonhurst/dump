// Author: Colton Hurst
function getWeather() {
  var zipcode = document.getElementById("weather-input").value;
  if (zipcode === "") {
    alert("you didn't enter a zip code!");
  } else {
    var apiKey = ""; // <- put in your free api key form http://openweathermap.org/ here!
    var url = "http://api.openweathermap.org/data/2.5/weather?zip=" + zipcode + "&appid=" + apiKey;
    var result = httpGetAsync(url, function(response) {
      var weatherOutput = document.getElementById("weather-output");
      weatherOutput.innerHTML = response;
    });
  }
}

function httpGetAsync(url, callback) {
  var xmlHttp = new XMLHttpRequest();

  xmlHttp.onreadystatechange = function () {
    if ((xmlHttp.readyState == 4) && (xmlHttp.status == 200)) {
      callback(xmlHttp.responseText);
    }
  }

  xmlHttp.open("GET", url, true);
  xmlHttp.send(null);
}
