const words = ["Welcome to UI Hosting", "Make your website beautiful"];
let wordIndex = 0;
let letterIndex = 0;
const textContainer = document.getElementById("text-container");

function typeEffect() {
  const currentWord = words[wordIndex];
  const displayText = currentWord.slice(0, letterIndex + 1);

  textContainer.textContent = displayText;

  if (letterIndex < currentWord.length) {
    letterIndex++;
    setTimeout(typeEffect, 100); // Adjust the typing speed (in milliseconds)
  } else {
    setTimeout(changeWord, 1000); // Adjust the pause between words (in milliseconds)
  }
}

function changeWord() {
  letterIndex = 0;
  wordIndex = (wordIndex + 1) % words.length;
  setTimeout(typeEffect, 500); // Adjust the pause before typing the next word (in milliseconds)
}

// Start the animation
typeEffect();
