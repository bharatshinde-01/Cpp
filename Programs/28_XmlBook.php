Create 

<?php

$xml = new DOMDocument();   // XML create

$root = $xml->createElement("books");

for($i=1;$i<=5;$i++)   // more than 5 books
{
    $b = $xml->createElement("book");

    $b->appendChild($xml->createElement("code",$i));
    $b->appendChild($xml->createElement("name","Book".$i));
    $b->appendChild($xml->createElement("author","Author".$i));
    $b->appendChild($xml->createElement("publication","Pub".($i%2+1)));
    $b->appendChild($xml->createElement("price",100*$i));

    $root->appendChild($b);
}

$xml->appendChild($root);

$xml->save("books.xml");   // file save

echo "XML Created";

?>

Create disply.php

<html>
<body>

<form method="post">
Enter Publication: <input type="text" name="pub">
<input type="submit" value="Show">
</form>

<?php

if(isset($_POST['pub']))
{
    $p = $_POST['pub'];

    $xml = simplexml_load_file("books.xml");   // XML read

    echo "<table border=1>";
    echo "<tr><th>Code</th><th>Name</th><th>Author</th><th>Publication</th><th>Price</th></tr>";

    foreach($xml->book as $b)
    {
        if($b->publication == $p)   // filter by publication
        {
            echo "<tr>";
            echo "<td>".$b->code."</td>";
            echo "<td>".$b->name."</td>";
            echo "<td>".$b->author."</td>";
            echo "<td>".$b->publication."</td>";
            echo "<td>".$b->price."</td>";
            echo "</tr>";
        }
    }

    echo "</table>";
}

?>

</body>
</html>