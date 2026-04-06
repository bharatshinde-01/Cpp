<?php

$xml = simplexml_load_file("book.xml");   // XML read using SimpleXML

echo "<table border=1>";
echo "<tr>
<th>Code</th>
<th>Name</th>
<th>Author</th>
<th>Year</th>
<th>Price</th>
</tr>";

foreach($xml->book as $b)   // loop through XML nodes
{
    echo "<tr>";
    echo "<td>".$b->book_code."</td>";
    echo "<td>".$b->book_name."</td>";
    echo "<td>".$b->author."</td>";
    echo "<td>".$b->year."</td>";
    echo "<td>".$b->price."</td>";
    echo "</tr>";
}

echo "</table>";

?>