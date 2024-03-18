<?php

$n = floatval(3.14159);
$r = floatval(fgets(STDIN));

$area = $n * ( $r * $r );

echo "A=".sprintf("%.4f", $area)."\n";

?>