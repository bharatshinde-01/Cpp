Database 

create database test;

use test;

create table EMP(
eno int,
ename varchar(20),
designation varchar(20),
salary int
);

insert into EMP values(1,'Amit','Manager',50000);
insert into EMP values(2,'Ravi','Clerk',20000);
insert into EMP values(3,'Neha','HR',30000);

Create index.html

<html>
<head>
<script>
function showEmp(str)
{
    if(str=="") return;

    var xhttp = new XMLHttpRequest();   // AJAX

    xhttp.onreadystatechange = function()
    {
        if(this.readyState==4 && this.status==200)
        {
            document.getElementById("out").innerHTML = this.responseText;
        }
    };

    xhttp.open("GET","emp.php?name="+str,true);
    xhttp.send();
}
</script>
</head>

<body>

<select onchange="showEmp(this.value)">   <!-- AJAX call -->
<option value="">Select Employee</option>
<option value="Amit">Amit</option>
<option value="Ravi">Ravi</option>
<option value="Neha">Neha</option>
</select>

<div id="out"></div>

</body>
</html>


Crate emp.php 

<?php

$conn = mysqli_connect("localhost","root","","test");   // DB connection

$name = $_GET['name'];

$q = "select * from EMP where ename='$name'";
$res = mysqli_query($conn,$q);

$row = mysqli_fetch_assoc($res);

echo "Emp No: ".$row['eno']."<br>";
echo "Name: ".$row['ename']."<br>";
echo "Designation: ".$row['designation']."<br>";
echo "Salary: ".$row['salary'];

?>