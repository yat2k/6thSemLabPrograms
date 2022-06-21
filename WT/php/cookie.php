<html>
<body bgcolor="87ceeb">
<center><h2> Last visited time on the web page</h2></center>
<br>
<?php
//date_default_timezone_set('Asia/Calcutta');-You can choose any timezone
 
//Calculate 60 days in the future
//seconds * minutes * hours * days + current time
 
$inTwoMonths = 60 * 60 * 24 * 60 + time();
setcookie('lastVisit', date("G:i - m/d/y"), $inTwoMonths);
if(isset($_COOKIE['lastVisit']))
 
{
$visit = $_COOKIE['lastVisit'];
echo "Your last visit was - ". $visit;
}
else
echo "You've got some stale cookies!";
?>
</body>
</html>
