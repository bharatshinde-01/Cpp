
index.html

<html>
<head>
<script>
function validate()
{
    var n = document.getElementById("name").value;
    var a = document.getElementById("age").value;
    var nat = document.getElementById("nat").value;

    var xhttp = new XMLHttpRequest();   // AJAX

    xhttp.onreadystatechange = function()
    {
        if(this.readyState==4 && this.status==200)
        {
            document.getElementById("msg").innerHTML = this.responseText;
        }
    };

    xhttp.open("GET","check.php?name="+n+"&age="+a+"&nat="+nat,true);
    xhttp.send();
}
</script>
</head>

<body>

Name: <input type="text" id="name"><br><br>
Age: <input type="text" id="age"><br><br>
Nationality: <input type="text" id="nat"><br><br>

<button onclick="validate()">Check</button>

<div id="msg"></div>

</body>
</html>


voter.php

<?php

$name = $_GET['name'];
$age = $_GET['age'];
$nat = $_GET['nat'];

if($name != strtoupper($name))   // uppercase check
{
    echo "Name should be in uppercase";
}
else if($age < 18)   // age validation
{
    echo "Age must be 18 or above";
}
else if($nat != "Indian")   // nationality check
{
    echo "Nationality must be Indian";
}
else
{
    echo "Valid Voter";
}

?>