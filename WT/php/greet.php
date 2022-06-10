<!DOCTYPE html>
<html>
<head>
   <title></title>
   <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
   </head>
   <body>
   <form method='POST'>
   <h2>Please input your name:</h2>
 <input type="text" name="name">
 <input type="submit" value="Submit Name">
 </form>
<?php

$name = $_POST['name'];
$greetings =array("Hello","Welcome","Hi","Good morning");
$random_keys=array_rand($greetings);
$greeting = $greetings[$random_keys];
echo "<h3> $greeting $name </h3>";
?>

</body>
</html>
