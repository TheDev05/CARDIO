document
  .getElementById("sendMessageBtn")
  .addEventListener("click", sendSMS);
  
  async function sendSMS(request) {
    // Generate a random OTP
    const otp = Math.floor(1000 + Math.random() * 9000); 
    const apiKey = 'YzWjhJR5rkix0Af6SSo8gQ';
    const recipientNumber = request.phone_number;
    const expiresAt = new Date(Date.now() + 2 * 60 * 1000); // Expiration time set to 2 minutes from now

    const senderId = 'SMSHUB';
    const title = request.title;
    const message = `Welcome to the ${title} powered by SMSINDIAHUB. Your OTP for registration is ${otp}`;
    const flashsms = '0'; // Set to 1 for flash SMS, 0 for normal SMS
    const dc = '0'; // Data coding scheme: 0 for plain text, 8 for Unicode
    const gatewayId = '2'; // Gateway ID

    const apiUrl = 'http://cloud.smsindiahub.in/vendorsms/pushsms.aspx';

    try {
        const response = await fetch(`${apiUrl}?APIKey=${apiKey}&msisdn=${recipientNumber}&sid=${senderId}&msg=${message}&fl=${flashsms}&dc=${dc}&gwid=${gatewayId}`, {
            method: 'GET'
        });

        if (!response.ok) {
            throw new Error('Network response was not ok: ' + response.statusText);
        }

        const body = await response.text(); // Assuming the response is plain text
        console.log(body);
    } catch (error) {
        console.error('There has been a problem with your fetch operation:', error);
    }
}

// Example request object
const request = {
    phone_number: '917764897552',
    title: 'EventTitle'
};

sendSMS(request);
