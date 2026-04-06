Create form.html

<html>
<body>

<form action="display.php" method="post">
User ID: <input type="text" name="uid"><br><br>
Name: <input type="text" name="name"><br><br>
Address: <input type="text" name="addr"><br><br>
Email: <input type="text" name="email"><br><br>
Mobile No: <input type="text" name="mob"><br><br>

<input type="submit" value="Submit">
</form>

</body>
</html>


Create display.php
<?php

$uid = $_POST['uid'];
$name = $_POST['name'];
$addr = $_POST['addr'];
$email = $_POST['email'];
$mob = $_POST['mob'];

echo "User ID: ".$uid."<br>";
echo "Name: ".$name."<br>";
echo "Address: ".$addr."<br>";
echo "Email: ".$email."<br>";
echo "Mobile: ".$mob;

?>