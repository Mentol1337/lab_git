const axios = require("axios");

axios.get("https://api.github.com")
  .then(res => {
    console.log("Status:", res.status);
    console.log("Content-Type:", res.headers["content-type"]);
    console.log("Keys:", Object.keys(res.data));
  })
  .catch(err => console.error("Error:", err.message));
