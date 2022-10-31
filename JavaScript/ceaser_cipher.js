function rot13(str) {
  var solved = "";
  const arr = [];
  for (let i = 0; i < str.length; i++) {
    let asciiN = str[i].charCodeAt()
    if (asciiN > 65 + 12) {
      solved = String.fromCharCode(asciiN - 13);
      arr.push(solved);
    }
    else if (asciiN <= 65 + 13 && asciiN >= 65) {
      solved = String.fromCharCode(asciiN + 13);
      arr.push(solved);
    }
    else if (asciiN > 90 || asciiN < 65) {
      solved = String.fromCharCode(asciiN);
      arr.push(solved);
    }
  }
  console.log(arr);
  let newStr = "";
  for (let j = 0; j < arr.length; j++) {
    newStr = newStr + arr[j]
  }
  newStr = newStr.replace(/-/g, " ")
  console.log(newStr);
  return newStr.replace(/-/g, " ");
}

rot13("SERR PBQR PNZC");
