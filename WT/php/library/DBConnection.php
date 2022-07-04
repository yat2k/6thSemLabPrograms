<?php
//Establishing connection with the database
define('DB_SERVER', 'localhost:3306');
define('DB_USERNAME', 'root');   // username:- viis{number}
define('DB_PASSWORD', 'root123'); // password:-^^^
define('DB_DATABASE', 'test'); //where test is the database name  ---> make this the db of your choice 
$db = mysqli_connect(DB_SERVER,DB_USERNAME,DB_PASSWORD,DB_DATABASE);
?>
