const express = require('express');
const app = express();
const path = require('path');
const { v4: uuidv4 } = require('uuid');
const methodOverride = require('method-override');
const PORT = 3000;

app.use(express.urlencoded({ extended: true }));
app.use(express.json());
app.use(methodOverride('_method'));

app.set('views', path.join(__dirname, 'views'));
app.set('view engine', 'ejs');

let comments = [
    {
        id: uuidv4(),
        username: 'Sam',
        comment: 'Hello, my name is Sam!'
    },
    {
        id: uuidv4(),
        username: 'Pam',
        comment: 'Hello, my name is Pam!'
    },
    {
        id: uuidv4(),
        username: 'Cam',
        comment: 'Hello, my name is Cam!'
    }
]

app.get('/', (req, res) => {
    console.log("Received Request to Home Page");
    res.render('home');
})

app.get('/comments', (req, res) => {
    console.log("Received Request to Comment Index");
    res.render('comments/index', { comments });
})

app.get('/comments/new', (req, res) => {
    console.log("Received Request to new Comment Page");
    res.render('comments/new');
})

app.post('/comments', (req, res) => {
    console.log("Received a new Comment Entry!");
    const { username, comment } = req.body;
    comments.push({ username, comment, id: uuidv4() });
    res.redirect('/comments');
})

app.get('/comments/:id', (req, res) => {
    const { id } = req.params;
    const foundComment = comments.find(c => c.id === id);
    res.render('comments/show', { foundComment });
})

app.get('/comments/:id/edit', (req, res) => {
    const { id } = req.params;
    const foundComment = comments.find(c => c.id === id);
    res.render('comments/edit', { foundComment });
})

app.patch('/comments/:id', (req, res) => {
    console.log("Updated a new Comment Entry!");
    const { id } = req.params;
    const foundComment = comments.find(c => c.id === id);
    const editedComment = req.body.comment;
    foundComment.comment = editedComment;
    res.redirect('/comments');
})

app.delete('/comments/:id', (req, res) => {
    console.log("Deleted Comment Entry");
    const { id } = req.params;
    comments = comments.filter(c => c.id != id);
    res.redirect('/comments');
})

app.listen(PORT, () => {
    try {
        console.log(`Listening now on PORT ${PORT}`);
    } catch (err) {
        console.log(err);
    }
})