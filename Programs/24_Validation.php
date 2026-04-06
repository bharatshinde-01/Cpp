 Crete index.html

<html>
<head>
<script>
function checkUser(str)
{
    var xhttp = new XMLHttpRequest();   // AJAX

    xhttp.onreadystatechange = function()
    {
        if(this.readyState==4 && this.status==200)
        {
            document.getElementById("msg").innerHTML = this.responseText;
        }
    };

    xhttp.open("GET","validate.php?u="+str,true);
    xhttp.send();
}
</script>
</head>

<body>

Enter Username: 
<input type="text" onkeyup="checkUser(this.value)">  <!-- AJAX call -->

<div id="msg"></div>

</body>
</html>


Create Validation.php 

<?php

$u = $_GET['u'];

if($u == "")
    echo "Enter username";
else if(strlen($u) < 3)   // length check
    echo "Username is too short";
else
    echo "Valid username";

?>