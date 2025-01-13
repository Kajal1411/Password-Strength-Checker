# Password-Strength-Checker
C project to evaluate and improve password security using comprehensive checks for complexity, uniqueness, and common patterns.<br>
 
<b>Overview:</b><br>

The Password Strength Checker is a C-based project designed to validate and improve the security of user passwords. This program ensures users choose strong and secure passwords by evaluating them against multiple criteria and providing actionable feedback. It incorporates file handling, strings, arrays, and control structures (if-else, loops) to perform the checks.<br>

<b>1.Features:</b><br>

- Checks if the password already exists in a file of previously used passwords.<br>
- Verifies if the password matches common passwords stored in a separate file.<br>
- Ensures the password is not similar to personal information such as:<br>
     - Name<br>
     - Mobile number<br>
     - Email<br>
     - Birthdate<br>
     
<b>2.Password Strength Evaluation:</b><br>

- Length validation (minimum 8 and maximum 16 characters).<br>
- Checks for a mix of:<br>
    - Uppercase letters<br>
    - Lowercase letters<br>
    - Digits<br>
    - Special characters<br>
- Flags passwords with:<br>
    - Repeated characters (e.g., "aaa")<br>
    - Sequential characters (e.g., "abc" or "123")<br>
- Identifies if the password contains parts of the user's name.<br>
  
<b>Suggestions for Improvement:</b><br>

- Provides specific feedback, such as adding uppercase letters, digits, or special characters.<br>
- Warns against weak patterns like sequential or repeated characters.<br>

<b>Password Storage:</b><br>
- Accepts and saves the password to a file (OldPass.txt) if it meets all security criteria.<br>

<b>Technologies Used:</b><br>
- Programming Language: C<br>
- Concepts:<br>
     - If-else statements<br>
     - Loops<br>
     - String manipulation<br>
     - File handling<br>
     - Arrays<br>
     
<b>Files:</b><br>
- <b>CommonPass.txt:</b> Contains a list of common passwords for comparison.<br>
- <b>OldPass.txt:</b> Stores previously used passwords to prevent reuse.<br>

<b>How It Works:</b><br>
- Users input their details (name, mobile number, email, birthdate) and a password.<br>
- The program performs the following checks:<br>
    - Ensures the password is unique and not commonly used.<br>
    - Evaluates the password against various strength criteria.<br>
- Provides feedback for weak passwords, with specific recommendations for improvement.<br>
- Saves the password to OldPass.txt if it is accepted.<br>
