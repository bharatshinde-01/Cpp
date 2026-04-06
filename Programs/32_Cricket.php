Creat file creat.php

<?php

$xml = new DOMDocument();   // XML create

$root = $xml->createElement("CricketTeam");

$team = $xml->createElement("Team");
$team->setAttribute("country","Australia");   // attribute use

$team->appendChild($xml->createElement("player","Smith"));
$team->appendChild($xml->createElement("runs","1200"));
$team->appendChild($xml->createElement("wicket","30"));

$root->appendChild($team);

$xml->appendChild($root);

$xml->save("cricket.xml");   // file save

echo "XML Created";

?>

Creat fiel add.php 

<?php

$xml = new DOMDocument();
$xml->load("cricket.xml");   // existing XML load

$root = $xml->getElementsByTagName("CricketTeam")->item(0);

$team = $xml->createElement("Team");
$team->setAttribute("country","India");   // new category

$team->appendChild($xml->createElement("player","Virat"));
$team->appendChild($xml->createElement("runs","1500"));
$team->appendChild($xml->createElement("wicket","50"));

$root->appendChild($team);   // add element

$xml->save("cricket.xml");

echo "India Team Added";

?>