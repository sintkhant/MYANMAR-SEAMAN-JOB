<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <title>Myanmar Seaman Job</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background: #f2f2f2;
      text-align: center;
      padding: 40px;
    }
    h1 {
      color: #0077cc;
    }
    .form-box {
      background: #fff;
      padding: 25px;
      border-radius: 10px;
      width: 90%;
      max-width: 500px;
      margin: auto;
      box-shadow: 0 2px 10px rgba(0,0,0,0.1);
    }
    input, textarea {
      width: 100%;
      padding: 10px;
      margin: 8px 0;
      border-radius: 5px;
      border: 1px solid #ccc;
    }
    button {
      background: #0077cc;
      color: #fff;
      border: none;
      padding: 12px;
      border-radius: 5px;
      cursor: pointer;
    }
    button:hover {
      background: #005fa3;
    }
  </style>
</head>
<body>
  <h1>Myanmar Seafarers Job Apply</h1>
  <p>📄 Upload your CV and apply by email</p >

  <div class="form-box">
    <form action="https://formsubmit.co/your-email@example.com" method="POST" enctype="multipart/form-data">
      <input type="text" name="name" placeholder="Your Name" required />
      <input type="email" name="email" placeholder="Your Email" required />
      <input type="file" name="cv" accept=".pdf,.doc,.docx" required />
      <textarea name="message" rows="4" placeholder="Message or Job Position (Optional)"></textarea>
      <button type="submit">Submit Application</button>
    </form>
  </div>
</body>
</html>
