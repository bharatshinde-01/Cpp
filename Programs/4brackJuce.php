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
// --- STEP 1: XML File Create Karna ---
$xml = new DOMDocument("1.0", "UTF-8");
$xml->formatOutput = true; // Taaki XML file properly indented dikhe

// Root element create karein
$root = $xml->createElement("breakfast_menu");
$xml->appendChild($root);

// Pehla food item (French Fries)
$food1 = $xml->createElement("food");
$food1->appendChild($xml->createElement("name", "French Fries"));
$food1->appendChild($xml->createElement("price", "Rs45"));
$food1->appendChild($xml->createElement("description", "Young youths are very much interested to eat it"));
$food1->appendChild($xml->createElement("calories", "650"));
$root->appendChild($food1);

// File save karein
$xml->save("breakfast.xml");
echo "1. 'breakfast.xml' created with French Fries.<br>";

// --- STEP 2: Multiple Juice Elements Add Karna ---
// Bani hui file ko wapas load karein
$xmlLoad = new DOMDocument();
$xmlLoad->load("breakfast.xml");
$xmlLoad->formatOutput = true;

$rootNode = $xmlLoad->getElementsByTagName("breakfast_menu")->item(0);

// Juice Items ka array (Multiple elements handle karne ke liye)
$juiceItems = [
    [
        "name" => "Orange Juice",
        "price" => "Rs30",
        "description" => "Freshly squeezed vitamin C rich juice",
        "calories" => "120"
    ],
    [
        "name" => "Apple Juice",
        "price" => "Rs50",
        "description" => "Pure apple juice with no added sugar",
        "calories" => "150"
    ]
];

// Loop chalakar items add karein
foreach ($juiceItems as $item) {
    $food = $xmlLoad->createElement("food");
    
    // Category attribute add karna optional hai, par clearity ke liye achha hai
    $food->setAttribute("category", "Juice"); 
    
    $food->appendChild($xmlLoad->createElement("name", $item['name']));
    $food->appendChild($xmlLoad->createElement("price", $item['price']));
    $food->appendChild($xmlLoad->createElement("description", $item['description']));
    $food->appendChild($xmlLoad->createElement("calories", $item['calories']));
    
    $rootNode->appendChild($food);
}

// Final file save karein
$xmlLoad->save("breakfast.xml");
echo "2. Multiple Juice elements added successfully!";
?>