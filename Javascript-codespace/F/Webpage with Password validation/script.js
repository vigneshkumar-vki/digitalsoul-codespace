const passwordInput = document.querySelector(".pass-field input");
const eyeIcon = document.querySelector(".pass-field i");
const requirementList = document.querySelectorAll(".requirement-list li");
const requirements = [
    { regex: /.{8,}/, index: 0 },
    { regex: /[0-9]/, index: 1 },
    { regex: /[a-z]/, index: 2 },
    { regex: /[^A-Za-z0-9]/, index: 3 },
    { regex: /[A-Z]/, index: 4 }
];

// Listen for input to validate password requirements
passwordInput.addEventListener("keyup", (e) => {
    requirements.forEach(item => {
        const isValid = item.regex.test(e.target.value);
        const requirementItem = requirementList[item.index];
        if (isValid) {
            requirementItem.classList.add("valid");
            requirementItem.firstElementChild.className = "fas fa-check";
        } else {
            requirementItem.classList.remove("valid");
            requirementItem.firstElementChild.className = "fas fa-circle";
        }
    });

    // Check for Enter key press
    if (e.key === "Enter") {
        // If the password is valid (all requirements met)
        const allValid = [...requirementList].every(item => item.classList.contains("valid"));
        if (allValid) {
            console.log('Password valid. Proceeding...');
            // Trigger additional actions like form submission or a custom function
            // For example, you could call a function here or submit the form manually
            // form.submit();  // if it's inside a form
        } else {
            console.log('Password not valid yet.');
        }
        e.preventDefault(); // Prevent form submission if needed
    }
});

// Handle the visibility toggle for the password field (eye icon)
eyeIcon.addEventListener("click", () => {
    if (passwordInput.type === "password") {
        passwordInput.type = "text";  // Password visible
        eyeIcon.className = "fas fa-eye-slash";  // Change icon to eye-slash
    } else {
        passwordInput.type = "password";  // Password hidden
        eyeIcon.className = "fas fa-eye";  // Change icon to eye
    }
});
