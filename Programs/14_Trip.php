
create database test;

use test;

create table Trip(
tno int,
tname varchar(20),
Source varchar(20),
Destination varchar(20),
cost int
);

insert into Trip values(1,'GoaTrip','Mumbai','Goa',5000);
insert into Trip values(2,'DelhiTrip','Pune','Delhi',7000);
insert into Trip values(3,'ManaliTrip','Mumbai','Manali',9000);

Creat index.html file 

<html>
<head>
<script>
function showTrip(str)
{
    if(str=="")
    {
        document.getElementById("out").innerHTML="";
        return;
    }

    var xhttp = new XMLHttpRequest();   // AJAX

    xhttp.onreadystatechange = function()
    {
        if(this.readyState==4 && this.status==200)
        {
            document.getElementById("out").innerHTML=this.responseText;
        }
    };

    xhttp.open("GET","trip.php?tname="+str,true);
    xhttp.send();
}
</script>
</head>

<body>

<select onchange="showTrip(this.value)">
<option value="">Select Trip</option>
<option value="GoaTrip">GoaTrip</option>
<option value="DelhiTrip">DelhiTrip</option>
<option value="ManaliTrip">ManaliTrip</option>
</select>

<div id="out"></div>

</body>
</html>

create trip.php 
<?php

$conn = mysqli_connect("localhost","root","","test");   // DB connection

$name = $_GET['tname'];

$q = "select * from Trip where tname='$name'";
$res = mysqli_query($conn,$q);

$row = mysqli_fetch_assoc($res);

echo "Trip No: ".$row['tno']."<br>";
echo "Name: ".$row['tname']."<br>";
echo "Source: ".$row['Source']."<br>";
echo "Destination: ".$row['Destination']."<br>";
echo "Cost: ".$row['cost'];

?>