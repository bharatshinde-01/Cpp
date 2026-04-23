<html>
<body>

<form method="post">
    Name: <input type="text" name="name"><br><br>

    Select Cities:<br>
    <input type="checkbox" name="city[]" value="Pune"> Pune<br>
    <input type="checkbox" name="city[]" value="Mumbai"> Mumbai<br>
    <input type="checkbox" name="city[]" value="Delhi"> Delhi<br>
    <input type="checkbox" name="city[]" value="Goa"> Goa<br><br>

    <input type="submit" value="Submit">
</form>

<?php
if(isset($_POST['name']) && isset($_POST['city'])){
    $name = $_POST['name'];
    $cities = $_POST['city'];   // multi-valued parameter (array)

    echo "Name: $name <br>";
    echo "Cities selected:<br>";

    foreach($cities as $c){
        echo $c . "<br>";
    }
}
?>

</body>
</html>