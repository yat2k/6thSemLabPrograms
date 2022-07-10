<?php

$name = "counter.txt";
$file = fopen($name, "r");

$hits = fscanf($file, "%d");
fclose($file);

$file = fopen($name, "w");
$hits[0]++;
fwrite($file, $hits[0]);

echo "Total number of views: ".$hits[0];
?>
