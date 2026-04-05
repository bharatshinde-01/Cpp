<html>
<body>

<form method="post">
Enter Number: <input type="text" name="num">
<input type="submit" value="Check">
</form>

<?php

function reverseNum($n)   // recursion function for reverse
{
    if($n < 10)
        return $n;
    else
        return ($n % 10) * pow(10, strlen($n)-1) + reverseNum($n/10);
}

if(isset($_POST['num']))
{
    $num = $_POST['num'];
    $orignal = $num;

    $rev = reverseNum($num);

    echo "Reverse Number = ".$rev."<br>";

    if($num == $orignal)
        echo "Palindrome Number";
    else
        echo "Not Palindrome";
}

?>

</body>
</html>