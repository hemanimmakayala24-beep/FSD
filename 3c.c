1. HTML File (styles.html)
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<title>Types of CSS</title>
<!-- External CSS -->
<link rel="stylesheet" href="style.css">
<!-- Internal CSS -->
<style>
h2 {
color: blue;
text-align: center;
}
p.internal {

font-size: 18px;
color: green;
}
</style>
</head>
<body>
<h1 style="color:red; text-align:center;">
Inline CSS Example
</h1>
<p class="internal">
This paragraph uses Internal CSS styling.
</p>
<p class="external">
This paragraph uses External CSS styling.
</p>
</body>
</html>
2. External CSS File (style.css)
.external {
color: purple;
font-size: 20px;
font-weight: bold;
}
