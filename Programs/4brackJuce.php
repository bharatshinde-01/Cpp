<!--  create breakfast.xml file

  <?   //  xml version="1.0" encoding="UTF-8"?> 
<breakfast_menu>
  <food>
    <name>French Fries</name>
    <price>Rs45</price>
    <description>Young youths are very much interested to eat it</description>
    <calories>650</calories>
  </food>
  <food category="Juice">
    <name>Orange Juice</name>
    <price>Rs30</price>
    <description>Freshly squeezed vitamin C rich juice</description>
    <calories>120</calories>
  </food>
  <food category="Juice">
    <name>Apple Juice</name>
    <price>Rs50</price>
    <description>Pure apple juice with no added sugar</description>
    <calories>150</calories>
  </food>
</breakfast_menu>  -->


<?php

// Create XML object
$xml = new SimpleXMLElement('<breakfast_menu/>');

// Add first food item
$food = $xml->addChild('food');
$food->addChild('name', 'French Fries');
$food->addChild('price', 'Rs45');
$food->addChild('description', 'Young youths are very much interested to eat it');
$food->addChild('calories', '650');

// Add second food item (Juice)
$food2 = $xml->addChild('food');
$food2->addChild('name', 'Orange Juice');
$food2->addChild('price', 'Rs30');
$food2->addChild('description', 'Fresh and healthy juice');
$food2->addChild('calories', '120');

// Save XML file
$xml->asXML('breakfast.xml');

echo "XML file created successfully!";

?>