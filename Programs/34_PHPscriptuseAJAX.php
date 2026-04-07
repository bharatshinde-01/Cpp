Create file index.php

<html>
<head>
<script>
function showHint(str)
{
    if(str.length==0)
    {
        document.getElementById("txtHint").innerHTML="";
        return;
    }

    var xhttp = new XMLHttpRequest();   // AJAX

    xhttp.onreadystatechange = function()
    {
        if(this.readyState==4 && this.status==200)
        {
            document.getElementById("txtHint").innerHTML = this.responseText;
        }
    };

    xhttp.open("GET","hint.php?q="+str,true);
    xhttp.send();
}
</script>
</head>

<body>

Enter City: 
<input type="text" onkeyup="showHint(this.value)">   <!-- live AJAX -->

<p>Suggestions: <span id="txtHint"></span></p>

</body>
</html>

Create hint.php file 

<?php

$city = array("Mumbai","Pune","Delhi","Goa","Nashik","Nagpur");

$q = $_GET['q'];

$hint = "";

if($q != "")
{
    for($i=0;$i<count($city);$i++)
    {
        if(strtolower($q) == strtolower(substr($city[$i],0,strlen($q))))
        {
            if($hint == "")
                $hint = $city[$i];
            else
                $hint = $hint.", ".$city[$i];
        }
    }
}

if($hint == "")
    echo "No suggestion";
else
    echo $hint;

?>