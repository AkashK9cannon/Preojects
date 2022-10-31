function palindrome(str) {
  let str1 = str.replaceAll("_", "").replaceAll(/\W/g, "").split(/[a-z][A-Z][0-9]/g);
  const text = str1.toString().toLowerCase();
  let reverseTxt = "";
  for (let i = text.length - 1; i >= 0; i--) {
    reverseTxt += text[i];
  }
  if (text === reverseTxt) {
    return true;
  }
  else {
    return false;
  }
  // const reverseTxt = text.reverse().toLowerCase();
  
}

palindrome("eye");