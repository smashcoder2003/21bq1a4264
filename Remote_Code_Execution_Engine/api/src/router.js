const express = require('express');
const router = express.Router();
const path = require('path');

router.use(function (req, res, next) {
    console.log('%s %s %s', req.method, req.url, req.path);
    next();
});

router.get('/', (req, res) => {
    res.status(200).send({
        response: 'Response ok'
    });
});

router.get('/runtimes', (req, res) => {
    res.status(200).send({
        language: "python",
        version: "3.10.0",
        aliases: [
            "py",
            "python3"
        ]
    })
});

router.get('/codeeditor', (req, res) => {
    res.status(200).sendFile(path.join(__dirname, 'public', 'codeground.html'));
});

module.exports = router;