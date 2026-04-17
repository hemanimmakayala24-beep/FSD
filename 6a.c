<!DOCTYPE html>
<html>
<head>
<title>Internal and External JavaScript</title>
<!-- Internal JavaScript -->
<script>
function showInternalMessage() {
alert("This message is from Internal JavaScript!");
}
</script>
<!-- External JavaScript Link -->
<script src="external.js"></script>
</head>
<body>
<h2>Embedding Internal and External JavaScript</h2>

<button onclick="showInternalMessage()">Internal JavaScript</button>
<br><br>
<button onclick="showExternalMessage()">External JavaScript</button>
</body>
</html>
