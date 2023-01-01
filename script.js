var mess = (name) => {
  const nRepeat = [];
  for (i = 0; i < name.length; i++) {
    if (nRepeat.includes(name[i])) {
    } else {
      nRepeat.push(name[i]);
    }
  }
  if (nRepeat.length % 2 == 0) {
    return "CHAT WITH HER!";
  } else return "IGNORE HIM!";
};
