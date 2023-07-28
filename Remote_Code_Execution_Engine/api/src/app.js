const express = require('express');
const app = express();
const router = require('./router');
const path = require('path');
const PORT = process.env.PORT || 2000;

app.use(express.json());

app.use("/api", router);

app.use(express.static(path.join(__dirname, 'public')));

app.listen(PORT, () => {
    console.log(`The server is live at http://localhost:${PORT}`);
});
