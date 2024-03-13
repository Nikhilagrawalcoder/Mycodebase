// Add design and animation to Avengers theme
const avengersTitle = document.querySelector('.avengers-title');
const avengersLogo = document.querySelector('.avengers-logo');

// Apply CSS styles for design
avengersTitle.style.color = 'red';
avengersTitle.style.fontSize = '24px';
avengersLogo.style.width = '200px';
avengersLogo.style.height = '200px';

// Apply animation using CSS classes
avengersTitle.classList.add('animated', 'bounce');
avengersLogo.classList.add('animated', 'rotateIn');

// You can also add event listeners to trigger animations on user interactions
avengersLogo.addEventListener('click', () => {
    avengersLogo.classList.toggle('animated', 'pulse');
});