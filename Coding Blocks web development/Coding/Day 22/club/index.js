const express = require('express');
const path = require('path');
const app = express();
const mongoose = require('mongoose');
const methodOverride = require('method-override')
const Song = require('./models/Song');

mongoose.connect('mongodb://127.0.0.1:27017/practice') //db name
.then(()=>{console.log('DATABASE CONNECTED')})
.catch((err)=>{console.log(err , 'ERR')})


app.set('view engine' , 'ejs');  
app.set('views' , path.join(__dirname , 'views')); 
app.use(express.static(path.join(__dirname , 'public'))) 
app.use(express.urlencoded({ extended: true }))
app.use(methodOverride('_method'))

app.get('/songs' , async(req,res)=>{
    let allSongs = await Song.find();
    
    res.render('index' , {allSongs} )
})

    app.get('/songs/new' , (req,res)=>{
        res.render('new') 
    })

  
    app.post('/songs', async (req, res) => {
    let { songName, duration, singerName, singerAge } = req.body;
    let newSong = await Song.create({ songName, duration, singerName, singerAge });
    console.log(`Song created at: ${newSong.createdAt}`);
    res.redirect('/songs');
});



app.get('/songs/:id' , async(req,res)=>{
    let {id} = req.params;
    let foundSong = await Song.findById(id);
    res.render('show' , {foundSong});
})


    app.get('/songs/:idd/edit' , async(req,res)=>{
        let {idd} = req.params;
        let foundSong = await Song.findById(idd);
        res.render('edit' , {foundSong});
    })
   
    app.patch('/songs/:idd', async (req, res) => {
    let { idd } = req.params;
    let { songName, duration, singerName } = req.body;
    let updatedSong = await Song.findByIdAndUpdate(
        idd,
        { songName, duration, singerName }
    );
    console.log(`Song updated at: ${updatedSong.updatedAt}`);
    res.redirect('/songs');
});




app.delete('/songs/:id' , async(req,res)=>{
    let {id} = req.params;
    await Song.findByIdAndDelete(id);
    res.redirect('/songs') 
})




app.listen( 8080, ()=>{
    console.log(`SERVER CONNECTED AT PORT`)
})