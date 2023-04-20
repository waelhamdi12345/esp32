var firebaseConfig = {
	apiKey: "AIzaSyC7eDURir6hd8yzM1xljuPkXAbZkEPTc5U",
	authDomain: "ijdid-ya-rabe7.firebaseapp.com",
	databaseURL: "https://ijdid-ya-rabe7-default-rtdb.firebaseio.com",
	projectId: "ijdid-ya-rabe7",
	storageBucket: "ijdid-ya-rabe7.appspot.com",
	messagingSenderId: "307672402167",
	appId: "1:307672402167:web:64afb55794ffbc76842bf2",
	measurementId: "G-R9PCGRY754"
  };
  // Initialize Firebase
  firebase.initializeApp(firebaseConfig);

$(document).ready(function(){
  


    $(".btn").click(function(){
		var firebaseRef = firebase.database().ref().child("Led1Status");
		var inputVal = document.getElementById("myInput").value;
console.log(inputVal)
	  // post to firebase
			firebaseRef.set(inputVal);
		
		
	})
});