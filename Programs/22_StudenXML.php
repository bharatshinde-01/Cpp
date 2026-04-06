
Create file Create.php
<?php

$xml = new DOMDocument();   // XML create

$root = $xml->createElement("students");

$s1 = $xml->createElement("student");
$s1->appendChild($xml->createElement("roll","1"));
$s1->appendChild($xml->createElement("name","Amit"));
$s1->appendChild($xml->createElement("address","Pune"));
$s1->appendChild($xml->createElement("college","ABC"));
$s1->appendChild($xml->createElement("course","BCA"));

$root->appendChild($s1);

$s2 = $xml->createElement("student");
$s2->appendChild($xml->createElement("roll","2"));
$s2->appendChild($xml->createElement("name","Ravi"));
$s2->appendChild($xml->createElement("address","Mumbai"));
$s2->appendChild($xml->createElement("college","XYZ"));
$s2->appendChild($xml->createElement("course","BBA"));

$root->appendChild($s2);

$xml->appendChild($root);

$xml->save("student.xml");   // file save

echo "XML Created";

?>

Create disply.php

<html>
<body>

<form method="post">
Enter Course: <input type="text" name="course">
<input type="submit" value="Show">
</form>

<?php

if(isset($_POST['course']))
{
    $c = $_POST['course'];

    $xml = simplexml_load_file("student.xml");   // XML read

    echo "<table border=1>";
    echo "<tr><th>Roll</th><th>Name</th><th>Address</th><th>College</th><th>Course</th></tr>";

    foreach($xml->student as $s)
    {
        if($s->course == $c)   // filter by course
        {
            echo "<tr>";
            echo "<td>".$s->roll."</td>";
            echo "<td>".$s->name."</td>";
            echo "<td>".$s->address."</td>";
            echo "<td>".$s->college."</td>";
            echo "<td>".$s->course."</td>";
            echo "</tr>";
        }
    }

    echo "</table>";
}

?>

</body>
</html>