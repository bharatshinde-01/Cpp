Route::get('/game', function () {
    return view('game');
});

<html>
<head>
    <title>Game</title>
</head>
<body>

<h1>Games Information</h1>

<h2>Football</h2>
<ul>
    <li>Messi</li>
    <li>Ronaldo</li>
    <li>Neymar</li>
</ul>

<h2>Hockey</h2>
<ul>
    <li>Dhyan Chand</li>
    <li>Manpreet Singh</li>
    <li>PR Sreejesh</li>
</ul>

<h2>Cricket</h2>
<ul>
    <li>Sachin</li>
    <li>Kohli</li>
    <li>Dhoni</li>
</ul>

<h2>Announcement</h2>
<p>Upcoming Match: India vs Australia on Sunday</p>

</body>
</html>