<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<title>HTML5 Semantic Elements</title>
<!-- Internal CSS -->
<style>
body {
font-family: Arial, sans-serif;
margin: 0;
}
header, footer {
background-color: #2c3e50;
color: white;
text-align: center;
padding: 15px;
}
nav {
background-color: #34495e;
padding: 10px;
text-align: center;
}
nav a {
color: white;
margin: 10px;
text-decoration: none;

}
main {
display: flex;
padding: 20px;
}
section {
flex: 3;
background-color: #ecf0f1;
padding: 15px;
}
aside {
flex: 1;
background-color: #bdc3c7;
padding: 15px;
margin-left: 10px;
}
article {
background-color: white;
padding: 15px;
margin-bottom: 15px;
border: 1px solid #aaa;
}
figcaption {
font-size: 14px;
color: #555;
}
.highlight {
color: red;
font-weight: bold;
}
</style>
</head>
<body>
<header>
<h1>HTML5 Semantic Tags</h1>
<p>Demonstration of HTML5 Page Structure</p>
</header>
<nav>
<a href="#">Home</a>
<a href="#">About</a>
<a href="#">Contact</a>
</nav>
<main>
<section>
<article>
<h2>Article Section</h2>
<p>
This content is inside an
<span class="highlight">article</span> tag which represents independent content.
</p>
<figure>

<img src="https://www.shortifylink.in/shortifyUrl.png" alt="Sample Image"
width=50 height=25>
<figcaption>Sample Image with Caption</figcaption>
</figure>
</article>
<div>
<h3>Div and Span Example</h3>
<p>
The <span class="highlight">span</span> tag is used for inline styling,
while <span class="highlight">div</span> is used for block-level grouping.
</p>
</div>
</section>
<aside>
<h3>Aside Section</h3>
<p>
This content is displayed using the
<span class="highlight">aside</span> tag.
</p>
</aside>
</main>
<footer>
<p>&copy; 2026 HTML5 Lab Program</p>
</footer>
</body>
</html>