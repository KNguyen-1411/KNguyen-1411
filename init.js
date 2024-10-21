process.env["NODE_TLS_REJECT_UNAUTHORIZED"] = 1;
const fs = require("fs");

const generate = () => {
  const curDate = new Date();
  const dd = String(curDate.getDate()).padStart(2, `0`);
  const mm = String(curDate.getMonth() + 1).padStart(2, `0`);
  const yyyy = String(curDate.getFullYear()).padStart(4, `0`);

  const today = `${mm}/${dd}/${yyyy}`;
  let readmeContent = fs.readFileSync("temp.md", "utf-8");
  readmeContent = readmeContent.replace(/{{DATE}}/g, today);
  fs.writeFileSync("README.md", readmeContent);
};

generate();
