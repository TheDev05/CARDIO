document.getElementById("sendMessageBtn").addEventListener("click", sendOTP);

async function sendOTP() {
  const phone_number = "917764897552";
  const title = "dev-app";

  const apiKey = "hSFE65TaakWuFH2b2Hf1hQ";
  const senderId = "SMSHUB";
  const otp = Math.floor(1000 + Math.random() * 9000); // Generate a random OTP
  const message = `Welcome to the ${title} powered by SMSINDIAHUB. Your OTP for registration is ${otp}`;
  const flashsms = "0"; // Set to 1 for flash SMS, 0 for normal SMS
  const dc = "0"; // Data coding scheme: 0 for plain text, 8 for Unicode
  const gatewayId = "2"; // Gateway ID

  console.log(title, message);

  const url = `http://cloud.smsindiahub.in/vendorsms/pushsms.aspx?APIKey=${apiKey}&msisdn=${phone_number}&sid=${senderId}&msg=${message}&fl=${flashsms}&dc=${dc}&gwid=${gatewayId}`;

  try {
    const response = await fetch(url);
    if (!response.ok) {
      throw new Error("Network response was not ok");
    }

    const body = await response.text();

    // Handle OTP storage logic here (e.g., store OTP in a database with an expiration time)

    return {
      message: "OTP sent successfully",
      status: 1,
      data: body,
      otp: otp, // Return OTP for further processing (e.g., storing in a database)
    };
  } catch (error) {
    console.error("Error:", error);
    return {
      message: "Error sending OTP",
      status: 0,
      error: error.message,
    };
  }
}
