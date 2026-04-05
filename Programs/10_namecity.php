<html>
<body>

<form method="post">
Name: <input type="text" name="name"><br><br>

Select Cities:<br>
<input type="checkbox" name="city[]" value="Mumbai">Mumbai<br>
<input type="checkbox" name="city[]" value="Pune">Pune<br>
<input type="checkbox" name="city[]" value="Delhi">Delhi<br>
<input type="checkbox" name="city[]" value="Goa">Goa<br><br>

<input type="submit" value="Submit">
</form>

<?php

if(isset($_POST['name']))
{
    $name = $_POST['name'];

    echo "Name: ".$name."<br>";
    echo "Selected Cities:<br>";

    foreach($_POST['city'] as $c)   // multi-valued parameter (array)
    {
        echo $c."<br>";
    }
}

?>

</body>
</html>