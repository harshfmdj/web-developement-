const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/html');
    res.end(`<!DOCTYPE html>
    <html lang="en">
    
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Psurdo selectors & more designing</title>
        <style>
            .container {
                border: 2px solid red;
                background-color: rgb(185, 173, 162);
                padding: 34px;
                margin: 34px auto;
                width: 666px;
            }
    
            a {
    
                text-decoration: none;
                color: black;
    
    
            }
    
            a:hover {
                background-color: crimson;
            }
    
            a:active {
                background-color: darkblue;
            }
    
            a:visited {
                color: teal;
            }
    
            .btn {
                background-color: slategrey;
                padding: 6px;
                border: none;
                cursor: pointer;
                font-size: 18px;
                border-radius: 4px;
            }
    
            .btn:hover {
                color: darkgoldenrod;
                background-color: darkkhaki;
                border: 2px solid black;
    
            }
        </style>
    </head>
    
    <body>
        <div class="container" id="cont1">
            <h3>This is my heading</h3>
            <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Velit inventore, voluptates explicabo, eos impedit
                modi labore non animi nulla provident fugit, quam adipisci libero dolorem reiciendis iure fugiat quos
                excepturi dignissimos. Minus similique voluptatibus quaerat ullam quod assumenda voluptas sunt?</p>
            <a href="https://yahoo.com" class="btn">Read more</a>
            <button class="btn">Contact Us</button>
            </button>
    
        </div>
    </body>
    
    </html>`);
});

server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
});