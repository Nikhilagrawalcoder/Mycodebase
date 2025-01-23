const mongoose = require('mongoose');


const SongSchema = new mongoose.Schema({
    songName:{
        type: String,
        trim: true,
        required: true
    },
    duration:{
        type: Number,
        
        required: true
    },
    singerName: {
        type: String,
       trim:true,
        required: true
    },
    singerAge:{
        type: String,
        trim: true
    }},
    {
        timestamps:true
    }

)


const Song = mongoose.model('SongDBE' , SongSchema)


module.exports = Song;

