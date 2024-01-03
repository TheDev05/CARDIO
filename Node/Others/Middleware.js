const validator = (req, res, next) => {
  console.log("Validator");
  next();
};

module.exports = { validator };
