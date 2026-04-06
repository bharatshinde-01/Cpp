<html>
<body>

<?php
$name = "";
$email = "";

if(isset($_POST['submit']))   // form submit check
{
    $name = $_POST['name'];   // value receive
    $email = $_POST['email'];

    echo "Name: ".$name."<br>";
    echo "Email: ".$email."<br><br>";
}
?>

<form method="post">   <!-- same page form -->

Name: 
<input type="text" name="name" value="<?php echo $name; ?>"> 
<!-- sticky form: value retain -->

<br><br>

Email: 
<input type="text" name="email" value="<?php echo $email; ?>"> 
<!-- sticky form: value retain -->

<br><br>

<input type="submit" name="submit" value="Register">

</form>

</body>

</html>  