<?php

class Calculator
{
    private $a, $b;

    function __construct($x, $y)   // constructor
    {
        $this->a = $x;   // this keyword use
        $this->b = $y;
    }

    function add()
    {
        return $this->a + $this->b;
    }

    function subtract()
    {
        return $this->a - $this->b;
    }

    function multiply()
    {
        return $this->a * $this->b;
    }

    function divide()
    {
        return $this->a / $this->b;
    }
}

$calc = new Calculator(3,4);   // object create

echo "Add = ".$calc->add()."<br>";
echo "Multiply = ".$calc->multiply()."<br>";

?>