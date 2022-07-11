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


another code if the above one doesnt work in putty SSH

<?php
 
$count_page = ("counter.txt");
$hits = file($count_page);
$hits[0] ++;
 
$fp = fopen($count_page , "w");
fputs($fp , "$hits[0]");
fclose($fp);
echo $hits[0];
 
?>
